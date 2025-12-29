// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELALARMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelAlarmResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Extentions, extentions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelAlarmResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Extentions, extentions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListHotelAlarmResponseBody() = default ;
    ListHotelAlarmResponseBody(const ListHotelAlarmResponseBody &) = default ;
    ListHotelAlarmResponseBody(ListHotelAlarmResponseBody &&) = default ;
    ListHotelAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelAlarmResponseBody() = default ;
    ListHotelAlarmResponseBody& operator=(const ListHotelAlarmResponseBody &) = default ;
    ListHotelAlarmResponseBody& operator=(ListHotelAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScheduleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Once, once_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weekly, weekly_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Once, once_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Weekly, weekly_);
        };
        ScheduleInfo() = default ;
        ScheduleInfo(const ScheduleInfo &) = default ;
        ScheduleInfo(ScheduleInfo &&) = default ;
        ScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleInfo() = default ;
        ScheduleInfo& operator=(const ScheduleInfo &) = default ;
        ScheduleInfo& operator=(ScheduleInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Weekly : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Weekly& obj) { 
            DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_TO_JSON(Hour, hour_);
            DARABONBA_PTR_TO_JSON(Minute, minute_);
          };
          friend void from_json(const Darabonba::Json& j, Weekly& obj) { 
            DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_FROM_JSON(Hour, hour_);
            DARABONBA_PTR_FROM_JSON(Minute, minute_);
          };
          Weekly() = default ;
          Weekly(const Weekly &) = default ;
          Weekly(Weekly &&) = default ;
          Weekly(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Weekly() = default ;
          Weekly& operator=(const Weekly &) = default ;
          Weekly& operator=(Weekly &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->daysOfWeek_ == nullptr
        && this->hour_ == nullptr && this->minute_ == nullptr; };
          // daysOfWeek Field Functions 
          bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
          void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
          inline const vector<int32_t> & getDaysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
          inline vector<int32_t> getDaysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
          inline Weekly& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
          inline Weekly& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


          // hour Field Functions 
          bool hasHour() const { return this->hour_ != nullptr;};
          void deleteHour() { this->hour_ = nullptr;};
          inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
          inline Weekly& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


          // minute Field Functions 
          bool hasMinute() const { return this->minute_ != nullptr;};
          void deleteMinute() { this->minute_ = nullptr;};
          inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
          inline Weekly& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


        protected:
          shared_ptr<vector<int32_t>> daysOfWeek_ {};
          shared_ptr<int32_t> hour_ {};
          shared_ptr<int32_t> minute_ {};
        };

        class Once : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Once& obj) { 
            DARABONBA_PTR_TO_JSON(Day, day_);
            DARABONBA_PTR_TO_JSON(Hour, hour_);
            DARABONBA_PTR_TO_JSON(Minute, minute_);
            DARABONBA_PTR_TO_JSON(Month, month_);
            DARABONBA_PTR_TO_JSON(Year, year_);
          };
          friend void from_json(const Darabonba::Json& j, Once& obj) { 
            DARABONBA_PTR_FROM_JSON(Day, day_);
            DARABONBA_PTR_FROM_JSON(Hour, hour_);
            DARABONBA_PTR_FROM_JSON(Minute, minute_);
            DARABONBA_PTR_FROM_JSON(Month, month_);
            DARABONBA_PTR_FROM_JSON(Year, year_);
          };
          Once() = default ;
          Once(const Once &) = default ;
          Once(Once &&) = default ;
          Once(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Once() = default ;
          Once& operator=(const Once &) = default ;
          Once& operator=(Once &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->day_ == nullptr
        && this->hour_ == nullptr && this->minute_ == nullptr && this->month_ == nullptr && this->year_ == nullptr; };
          // day Field Functions 
          bool hasDay() const { return this->day_ != nullptr;};
          void deleteDay() { this->day_ = nullptr;};
          inline int32_t getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
          inline Once& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


          // hour Field Functions 
          bool hasHour() const { return this->hour_ != nullptr;};
          void deleteHour() { this->hour_ = nullptr;};
          inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
          inline Once& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


          // minute Field Functions 
          bool hasMinute() const { return this->minute_ != nullptr;};
          void deleteMinute() { this->minute_ = nullptr;};
          inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
          inline Once& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


          // month Field Functions 
          bool hasMonth() const { return this->month_ != nullptr;};
          void deleteMonth() { this->month_ = nullptr;};
          inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
          inline Once& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


          // year Field Functions 
          bool hasYear() const { return this->year_ != nullptr;};
          void deleteYear() { this->year_ = nullptr;};
          inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
          inline Once& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


        protected:
          shared_ptr<int32_t> day_ {};
          shared_ptr<int32_t> hour_ {};
          shared_ptr<int32_t> minute_ {};
          shared_ptr<int32_t> month_ {};
          shared_ptr<int32_t> year_ {};
        };

        virtual bool empty() const override { return this->once_ == nullptr
        && this->type_ == nullptr && this->weekly_ == nullptr; };
        // once Field Functions 
        bool hasOnce() const { return this->once_ != nullptr;};
        void deleteOnce() { this->once_ = nullptr;};
        inline const ScheduleInfo::Once & getOnce() const { DARABONBA_PTR_GET_CONST(once_, ScheduleInfo::Once) };
        inline ScheduleInfo::Once getOnce() { DARABONBA_PTR_GET(once_, ScheduleInfo::Once) };
        inline ScheduleInfo& setOnce(const ScheduleInfo::Once & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
        inline ScheduleInfo& setOnce(ScheduleInfo::Once && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ScheduleInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weekly Field Functions 
        bool hasWeekly() const { return this->weekly_ != nullptr;};
        void deleteWeekly() { this->weekly_ = nullptr;};
        inline const ScheduleInfo::Weekly & getWeekly() const { DARABONBA_PTR_GET_CONST(weekly_, ScheduleInfo::Weekly) };
        inline ScheduleInfo::Weekly getWeekly() { DARABONBA_PTR_GET(weekly_, ScheduleInfo::Weekly) };
        inline ScheduleInfo& setWeekly(const ScheduleInfo::Weekly & weekly) { DARABONBA_PTR_SET_VALUE(weekly_, weekly) };
        inline ScheduleInfo& setWeekly(ScheduleInfo::Weekly && weekly) { DARABONBA_PTR_SET_RVALUE(weekly_, weekly) };


      protected:
        shared_ptr<ScheduleInfo::Once> once_ {};
        // ONCE, WEEKLY
        shared_ptr<string> type_ {};
        shared_ptr<ScheduleInfo::Weekly> weekly_ {};
      };

      virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->deviceOpenId_ == nullptr && this->scheduleInfo_ == nullptr && this->userOpenId_ == nullptr; };
      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline int64_t getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
      inline Result& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // deviceOpenId Field Functions 
      bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
      void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
      inline string getDeviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
      inline Result& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


      // scheduleInfo Field Functions 
      bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
      void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
      inline const Result::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Result::ScheduleInfo) };
      inline Result::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Result::ScheduleInfo) };
      inline Result& setScheduleInfo(const Result::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
      inline Result& setScheduleInfo(Result::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


      // userOpenId Field Functions 
      bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
      void deleteUserOpenId() { this->userOpenId_ = nullptr;};
      inline string getUserOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
      inline Result& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


    protected:
      shared_ptr<int64_t> alarmId_ {};
      shared_ptr<string> deviceOpenId_ {};
      shared_ptr<Result::ScheduleInfo> scheduleInfo_ {};
      shared_ptr<string> userOpenId_ {};
    };

    virtual bool empty() const override { return this->extentions_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // extentions Field Functions 
    bool hasExtentions() const { return this->extentions_ != nullptr;};
    void deleteExtentions() { this->extentions_ = nullptr;};
    inline     const Darabonba::Json & getExtentions() const { DARABONBA_GET(extentions_) };
    Darabonba::Json & getExtentions() { DARABONBA_GET(extentions_) };
    inline ListHotelAlarmResponseBody& setExtentions(const Darabonba::Json & extentions) { DARABONBA_SET_VALUE(extentions_, extentions) };
    inline ListHotelAlarmResponseBody& setExtentions(Darabonba::Json && extentions) { DARABONBA_SET_RVALUE(extentions_, extentions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotelAlarmResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotelAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListHotelAlarmResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListHotelAlarmResponseBody::Result>) };
    inline vector<ListHotelAlarmResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListHotelAlarmResponseBody::Result>) };
    inline ListHotelAlarmResponseBody& setResult(const vector<ListHotelAlarmResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListHotelAlarmResponseBody& setResult(vector<ListHotelAlarmResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListHotelAlarmResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    Darabonba::Json extentions_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListHotelAlarmResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
