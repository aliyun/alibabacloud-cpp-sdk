// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class ListRemindersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRemindersResponseBody() = default ;
    ListRemindersResponseBody(const ListRemindersResponseBody &) = default ;
    ListRemindersResponseBody(ListRemindersResponseBody &&) = default ;
    ListRemindersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindersResponseBody() = default ;
    ListRemindersResponseBody& operator=(const ListRemindersResponseBody &) = default ;
    ListRemindersResponseBody& operator=(ListRemindersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(RemindResponses, remindResponses_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(RemindResponses, remindResponses_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemindResponses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemindResponses& obj) { 
          DARABONBA_PTR_TO_JSON(ActionTopic, actionTopic_);
          DARABONBA_PTR_TO_JSON(DayDesc, dayDesc_);
          DARABONBA_PTR_TO_JSON(RecurrenceRule, recurrenceRule_);
          DARABONBA_PTR_TO_JSON(RemindId, remindId_);
          DARABONBA_PTR_TO_JSON(RemindTime, remindTime_);
          DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
          DARABONBA_PTR_TO_JSON(Week, week_);
        };
        friend void from_json(const Darabonba::Json& j, RemindResponses& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionTopic, actionTopic_);
          DARABONBA_PTR_FROM_JSON(DayDesc, dayDesc_);
          DARABONBA_PTR_FROM_JSON(RecurrenceRule, recurrenceRule_);
          DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
          DARABONBA_PTR_FROM_JSON(RemindTime, remindTime_);
          DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
          DARABONBA_PTR_FROM_JSON(Week, week_);
        };
        RemindResponses() = default ;
        RemindResponses(const RemindResponses &) = default ;
        RemindResponses(RemindResponses &&) = default ;
        RemindResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemindResponses() = default ;
        RemindResponses& operator=(const RemindResponses &) = default ;
        RemindResponses& operator=(RemindResponses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RecurrenceRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecurrenceRule& obj) { 
            DARABONBA_PTR_TO_JSON(Day, day_);
            DARABONBA_PTR_TO_JSON(DaysOfMonth, daysOfMonth_);
            DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_TO_JSON(EndDateTime, endDateTime_);
            DARABONBA_PTR_TO_JSON(Freq, freq_);
            DARABONBA_PTR_TO_JSON(Hour, hour_);
            DARABONBA_PTR_TO_JSON(Minute, minute_);
            DARABONBA_PTR_TO_JSON(Month, month_);
            DARABONBA_PTR_TO_JSON(Second, second_);
            DARABONBA_PTR_TO_JSON(StartDateTime, startDateTime_);
            DARABONBA_PTR_TO_JSON(Year, year_);
          };
          friend void from_json(const Darabonba::Json& j, RecurrenceRule& obj) { 
            DARABONBA_PTR_FROM_JSON(Day, day_);
            DARABONBA_PTR_FROM_JSON(DaysOfMonth, daysOfMonth_);
            DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_FROM_JSON(EndDateTime, endDateTime_);
            DARABONBA_PTR_FROM_JSON(Freq, freq_);
            DARABONBA_PTR_FROM_JSON(Hour, hour_);
            DARABONBA_PTR_FROM_JSON(Minute, minute_);
            DARABONBA_PTR_FROM_JSON(Month, month_);
            DARABONBA_PTR_FROM_JSON(Second, second_);
            DARABONBA_PTR_FROM_JSON(StartDateTime, startDateTime_);
            DARABONBA_PTR_FROM_JSON(Year, year_);
          };
          RecurrenceRule() = default ;
          RecurrenceRule(const RecurrenceRule &) = default ;
          RecurrenceRule(RecurrenceRule &&) = default ;
          RecurrenceRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecurrenceRule() = default ;
          RecurrenceRule& operator=(const RecurrenceRule &) = default ;
          RecurrenceRule& operator=(RecurrenceRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->day_ == nullptr
        && this->daysOfMonth_ == nullptr && this->daysOfWeek_ == nullptr && this->endDateTime_ == nullptr && this->freq_ == nullptr && this->hour_ == nullptr
        && this->minute_ == nullptr && this->month_ == nullptr && this->second_ == nullptr && this->startDateTime_ == nullptr && this->year_ == nullptr; };
          // day Field Functions 
          bool hasDay() const { return this->day_ != nullptr;};
          void deleteDay() { this->day_ = nullptr;};
          inline int32_t getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
          inline RecurrenceRule& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


          // daysOfMonth Field Functions 
          bool hasDaysOfMonth() const { return this->daysOfMonth_ != nullptr;};
          void deleteDaysOfMonth() { this->daysOfMonth_ = nullptr;};
          inline const vector<int32_t> & getDaysOfMonth() const { DARABONBA_PTR_GET_CONST(daysOfMonth_, vector<int32_t>) };
          inline vector<int32_t> getDaysOfMonth() { DARABONBA_PTR_GET(daysOfMonth_, vector<int32_t>) };
          inline RecurrenceRule& setDaysOfMonth(const vector<int32_t> & daysOfMonth) { DARABONBA_PTR_SET_VALUE(daysOfMonth_, daysOfMonth) };
          inline RecurrenceRule& setDaysOfMonth(vector<int32_t> && daysOfMonth) { DARABONBA_PTR_SET_RVALUE(daysOfMonth_, daysOfMonth) };


          // daysOfWeek Field Functions 
          bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
          void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
          inline const vector<int32_t> & getDaysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
          inline vector<int32_t> getDaysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
          inline RecurrenceRule& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
          inline RecurrenceRule& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


          // endDateTime Field Functions 
          bool hasEndDateTime() const { return this->endDateTime_ != nullptr;};
          void deleteEndDateTime() { this->endDateTime_ = nullptr;};
          inline string getEndDateTime() const { DARABONBA_PTR_GET_DEFAULT(endDateTime_, "") };
          inline RecurrenceRule& setEndDateTime(string endDateTime) { DARABONBA_PTR_SET_VALUE(endDateTime_, endDateTime) };


          // freq Field Functions 
          bool hasFreq() const { return this->freq_ != nullptr;};
          void deleteFreq() { this->freq_ = nullptr;};
          inline string getFreq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
          inline RecurrenceRule& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


          // hour Field Functions 
          bool hasHour() const { return this->hour_ != nullptr;};
          void deleteHour() { this->hour_ = nullptr;};
          inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
          inline RecurrenceRule& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


          // minute Field Functions 
          bool hasMinute() const { return this->minute_ != nullptr;};
          void deleteMinute() { this->minute_ = nullptr;};
          inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
          inline RecurrenceRule& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


          // month Field Functions 
          bool hasMonth() const { return this->month_ != nullptr;};
          void deleteMonth() { this->month_ = nullptr;};
          inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
          inline RecurrenceRule& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


          // second Field Functions 
          bool hasSecond() const { return this->second_ != nullptr;};
          void deleteSecond() { this->second_ = nullptr;};
          inline int32_t getSecond() const { DARABONBA_PTR_GET_DEFAULT(second_, 0) };
          inline RecurrenceRule& setSecond(int32_t second) { DARABONBA_PTR_SET_VALUE(second_, second) };


          // startDateTime Field Functions 
          bool hasStartDateTime() const { return this->startDateTime_ != nullptr;};
          void deleteStartDateTime() { this->startDateTime_ = nullptr;};
          inline string getStartDateTime() const { DARABONBA_PTR_GET_DEFAULT(startDateTime_, "") };
          inline RecurrenceRule& setStartDateTime(string startDateTime) { DARABONBA_PTR_SET_VALUE(startDateTime_, startDateTime) };


          // year Field Functions 
          bool hasYear() const { return this->year_ != nullptr;};
          void deleteYear() { this->year_ = nullptr;};
          inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
          inline RecurrenceRule& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


        protected:
          // The date on which the reminder is triggered.
          shared_ptr<int32_t> day_ {};
          // Information for monthly reminders.
          shared_ptr<vector<int32_t>> daysOfMonth_ {};
          // Information for weekly reminders.
          shared_ptr<vector<int32_t>> daysOfWeek_ {};
          // The end time when the reminder becomes inactive.
          shared_ptr<string> endDateTime_ {};
          // The recurrence epoch of the reminder.
          shared_ptr<string> freq_ {};
          // The hour of the time when the reminder is triggered.
          shared_ptr<int32_t> hour_ {};
          // The minute of the hour when the reminder is triggered.
          shared_ptr<int32_t> minute_ {};
          // The month when the reminder is triggered.
          shared_ptr<int32_t> month_ {};
          // The second of the time when the reminder is triggered.
          shared_ptr<int32_t> second_ {};
          // The start time when the reminder becomes effective.
          shared_ptr<string> startDateTime_ {};
          // The year when the reminder is triggered.
          shared_ptr<int32_t> year_ {};
        };

        virtual bool empty() const override { return this->actionTopic_ == nullptr
        && this->dayDesc_ == nullptr && this->recurrenceRule_ == nullptr && this->remindId_ == nullptr && this->remindTime_ == nullptr && this->repeatCount_ == nullptr
        && this->week_ == nullptr; };
        // actionTopic Field Functions 
        bool hasActionTopic() const { return this->actionTopic_ != nullptr;};
        void deleteActionTopic() { this->actionTopic_ = nullptr;};
        inline string getActionTopic() const { DARABONBA_PTR_GET_DEFAULT(actionTopic_, "") };
        inline RemindResponses& setActionTopic(string actionTopic) { DARABONBA_PTR_SET_VALUE(actionTopic_, actionTopic) };


        // dayDesc Field Functions 
        bool hasDayDesc() const { return this->dayDesc_ != nullptr;};
        void deleteDayDesc() { this->dayDesc_ = nullptr;};
        inline string getDayDesc() const { DARABONBA_PTR_GET_DEFAULT(dayDesc_, "") };
        inline RemindResponses& setDayDesc(string dayDesc) { DARABONBA_PTR_SET_VALUE(dayDesc_, dayDesc) };


        // recurrenceRule Field Functions 
        bool hasRecurrenceRule() const { return this->recurrenceRule_ != nullptr;};
        void deleteRecurrenceRule() { this->recurrenceRule_ = nullptr;};
        inline const RemindResponses::RecurrenceRule & getRecurrenceRule() const { DARABONBA_PTR_GET_CONST(recurrenceRule_, RemindResponses::RecurrenceRule) };
        inline RemindResponses::RecurrenceRule getRecurrenceRule() { DARABONBA_PTR_GET(recurrenceRule_, RemindResponses::RecurrenceRule) };
        inline RemindResponses& setRecurrenceRule(const RemindResponses::RecurrenceRule & recurrenceRule) { DARABONBA_PTR_SET_VALUE(recurrenceRule_, recurrenceRule) };
        inline RemindResponses& setRecurrenceRule(RemindResponses::RecurrenceRule && recurrenceRule) { DARABONBA_PTR_SET_RVALUE(recurrenceRule_, recurrenceRule) };


        // remindId Field Functions 
        bool hasRemindId() const { return this->remindId_ != nullptr;};
        void deleteRemindId() { this->remindId_ = nullptr;};
        inline int64_t getRemindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
        inline RemindResponses& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


        // remindTime Field Functions 
        bool hasRemindTime() const { return this->remindTime_ != nullptr;};
        void deleteRemindTime() { this->remindTime_ = nullptr;};
        inline string getRemindTime() const { DARABONBA_PTR_GET_DEFAULT(remindTime_, "") };
        inline RemindResponses& setRemindTime(string remindTime) { DARABONBA_PTR_SET_VALUE(remindTime_, remindTime) };


        // repeatCount Field Functions 
        bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
        void deleteRepeatCount() { this->repeatCount_ = nullptr;};
        inline int32_t getRepeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
        inline RemindResponses& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


        // week Field Functions 
        bool hasWeek() const { return this->week_ != nullptr;};
        void deleteWeek() { this->week_ = nullptr;};
        inline string getWeek() const { DARABONBA_PTR_GET_DEFAULT(week_, "") };
        inline RemindResponses& setWeek(string week) { DARABONBA_PTR_SET_VALUE(week_, week) };


      protected:
        // The topic of the action executed by the reminder.
        shared_ptr<string> actionTopic_ {};
        // Description of the trigger condition for the reminder.
        shared_ptr<string> dayDesc_ {};
        // The schedule information list, which contains detailed timing information for the reminder.
        shared_ptr<RemindResponses::RecurrenceRule> recurrenceRule_ {};
        // The ID of the reminder message.
        shared_ptr<int64_t> remindId_ {};
        // The next reminder time.
        shared_ptr<string> remindTime_ {};
        // The number of times the reminder repeats.
        shared_ptr<int32_t> repeatCount_ {};
        // The day of the week on which the reminder is triggered weekly.
        shared_ptr<string> week_ {};
      };

      virtual bool empty() const override { return this->remindResponses_ == nullptr; };
      // remindResponses Field Functions 
      bool hasRemindResponses() const { return this->remindResponses_ != nullptr;};
      void deleteRemindResponses() { this->remindResponses_ = nullptr;};
      inline const vector<Model::RemindResponses> & getRemindResponses() const { DARABONBA_PTR_GET_CONST(remindResponses_, vector<Model::RemindResponses>) };
      inline vector<Model::RemindResponses> getRemindResponses() { DARABONBA_PTR_GET(remindResponses_, vector<Model::RemindResponses>) };
      inline Model& setRemindResponses(const vector<Model::RemindResponses> & remindResponses) { DARABONBA_PTR_SET_VALUE(remindResponses_, remindResponses) };
      inline Model& setRemindResponses(vector<Model::RemindResponses> && remindResponses) { DARABONBA_PTR_SET_RVALUE(remindResponses_, remindResponses) };


    protected:
      // The list of reminder information returned by invoking this API.
      shared_ptr<vector<Model::RemindResponses>> remindResponses_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->model_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline ListRemindersResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListRemindersResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const ListRemindersResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, ListRemindersResponseBody::Model) };
    inline ListRemindersResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, ListRemindersResponseBody::Model) };
    inline ListRemindersResponseBody& setModel(const ListRemindersResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline ListRemindersResponseBody& setModel(ListRemindersResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRemindersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code.
    shared_ptr<int32_t> errorCode_ {};
    // Detailed description of the error message.
    shared_ptr<string> errorMsg_ {};
    // Reminder information.
    shared_ptr<ListRemindersResponseBody::Model> model_ {};
    // Indicates the result of the API call. true indicates success, and false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
