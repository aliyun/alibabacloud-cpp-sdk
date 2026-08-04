// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALARMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetAlarmResponseBody() = default ;
    GetAlarmResponseBody(const GetAlarmResponseBody &) = default ;
    GetAlarmResponseBody(GetAlarmResponseBody &&) = default ;
    GetAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmResponseBody() = default ;
    GetAlarmResponseBody& operator=(const GetAlarmResponseBody &) = default ;
    GetAlarmResponseBody& operator=(GetAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(MusicInfo, musicInfo_);
        DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_TO_JSON(ScheduleTypeDesc, scheduleTypeDesc_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TriggerDateDesc, triggerDateDesc_);
        DARABONBA_PTR_TO_JSON(TriggerTimeDesc, triggerTimeDesc_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(MusicInfo, musicInfo_);
        DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_FROM_JSON(ScheduleTypeDesc, scheduleTypeDesc_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TriggerDateDesc, triggerDateDesc_);
        DARABONBA_PTR_FROM_JSON(TriggerTimeDesc, triggerTimeDesc_);
        DARABONBA_PTR_FROM_JSON(Volume, volume_);
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
          DARABONBA_PTR_TO_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weekly, weekly_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Once, once_);
          DARABONBA_PTR_FROM_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
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
          // Collection of days of the week to trigger: Numeric values between 1 and 7, where each number corresponds to a specific day of the week. If triggered every day, include all numbers.
          shared_ptr<vector<int32_t>> daysOfWeek_ {};
          // Trigger time: Hour
          shared_ptr<int32_t> hour_ {};
          // Trigger time: Minute
          shared_ptr<int32_t> minute_ {};
        };

        class StatutoryWorkingDay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatutoryWorkingDay& obj) { 
            DARABONBA_PTR_TO_JSON(Hour, hour_);
            DARABONBA_PTR_TO_JSON(Minute, minute_);
          };
          friend void from_json(const Darabonba::Json& j, StatutoryWorkingDay& obj) { 
            DARABONBA_PTR_FROM_JSON(Hour, hour_);
            DARABONBA_PTR_FROM_JSON(Minute, minute_);
          };
          StatutoryWorkingDay() = default ;
          StatutoryWorkingDay(const StatutoryWorkingDay &) = default ;
          StatutoryWorkingDay(StatutoryWorkingDay &&) = default ;
          StatutoryWorkingDay(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatutoryWorkingDay() = default ;
          StatutoryWorkingDay& operator=(const StatutoryWorkingDay &) = default ;
          StatutoryWorkingDay& operator=(StatutoryWorkingDay &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->hour_ == nullptr
        && this->minute_ == nullptr; };
          // hour Field Functions 
          bool hasHour() const { return this->hour_ != nullptr;};
          void deleteHour() { this->hour_ = nullptr;};
          inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
          inline StatutoryWorkingDay& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


          // minute Field Functions 
          bool hasMinute() const { return this->minute_ != nullptr;};
          void deleteMinute() { this->minute_ = nullptr;};
          inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
          inline StatutoryWorkingDay& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


        protected:
          // Trigger Time: Hour
          shared_ptr<int32_t> hour_ {};
          // Trigger Time: Minute
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
          // Trigger time: Day
          shared_ptr<int32_t> day_ {};
          // Trigger Time: Hour
          shared_ptr<int32_t> hour_ {};
          // Trigger Time: Minute
          shared_ptr<int32_t> minute_ {};
          // Trigger Time: Month
          shared_ptr<int32_t> month_ {};
          // Trigger Time: Year
          shared_ptr<int32_t> year_ {};
        };

        virtual bool empty() const override { return this->once_ == nullptr
        && this->statutoryWorkingDay_ == nullptr && this->type_ == nullptr && this->weekly_ == nullptr; };
        // once Field Functions 
        bool hasOnce() const { return this->once_ != nullptr;};
        void deleteOnce() { this->once_ = nullptr;};
        inline const ScheduleInfo::Once & getOnce() const { DARABONBA_PTR_GET_CONST(once_, ScheduleInfo::Once) };
        inline ScheduleInfo::Once getOnce() { DARABONBA_PTR_GET(once_, ScheduleInfo::Once) };
        inline ScheduleInfo& setOnce(const ScheduleInfo::Once & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
        inline ScheduleInfo& setOnce(ScheduleInfo::Once && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


        // statutoryWorkingDay Field Functions 
        bool hasStatutoryWorkingDay() const { return this->statutoryWorkingDay_ != nullptr;};
        void deleteStatutoryWorkingDay() { this->statutoryWorkingDay_ = nullptr;};
        inline const ScheduleInfo::StatutoryWorkingDay & getStatutoryWorkingDay() const { DARABONBA_PTR_GET_CONST(statutoryWorkingDay_, ScheduleInfo::StatutoryWorkingDay) };
        inline ScheduleInfo::StatutoryWorkingDay getStatutoryWorkingDay() { DARABONBA_PTR_GET(statutoryWorkingDay_, ScheduleInfo::StatutoryWorkingDay) };
        inline ScheduleInfo& setStatutoryWorkingDay(const ScheduleInfo::StatutoryWorkingDay & statutoryWorkingDay) { DARABONBA_PTR_SET_VALUE(statutoryWorkingDay_, statutoryWorkingDay) };
        inline ScheduleInfo& setStatutoryWorkingDay(ScheduleInfo::StatutoryWorkingDay && statutoryWorkingDay) { DARABONBA_PTR_SET_RVALUE(statutoryWorkingDay_, statutoryWorkingDay) };


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
        // One-time: This property is active when the loop type is ONCE.
        shared_ptr<ScheduleInfo::Once> once_ {};
        // Statutory working day: This property is active when the loop Type is STATUTORYWORKINGDAY.
        shared_ptr<ScheduleInfo::StatutoryWorkingDay> statutoryWorkingDay_ {};
        // Schedule Type / Loop Type: ONCE -> One-time, WEEKLY -> Weekly loop, STATUTORYWORKINGDAY -> Statutory working day
        shared_ptr<string> type_ {};
        // Weekly loop: This property is active when the loop Type is WEEKLY.
        shared_ptr<ScheduleInfo::Weekly> weekly_ {};
      };

      class MusicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MusicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(MusicId, musicId_);
          DARABONBA_PTR_TO_JSON(MusicName, musicName_);
          DARABONBA_PTR_TO_JSON(MusicType, musicType_);
          DARABONBA_PTR_TO_JSON(MusicTypeName, musicTypeName_);
          DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
        };
        friend void from_json(const Darabonba::Json& j, MusicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(MusicId, musicId_);
          DARABONBA_PTR_FROM_JSON(MusicName, musicName_);
          DARABONBA_PTR_FROM_JSON(MusicType, musicType_);
          DARABONBA_PTR_FROM_JSON(MusicTypeName, musicTypeName_);
          DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
        };
        MusicInfo() = default ;
        MusicInfo(const MusicInfo &) = default ;
        MusicInfo(MusicInfo &&) = default ;
        MusicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MusicInfo() = default ;
        MusicInfo& operator=(const MusicInfo &) = default ;
        MusicInfo& operator=(MusicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->musicId_ == nullptr
        && this->musicName_ == nullptr && this->musicType_ == nullptr && this->musicTypeName_ == nullptr && this->musicUrl_ == nullptr; };
        // musicId Field Functions 
        bool hasMusicId() const { return this->musicId_ != nullptr;};
        void deleteMusicId() { this->musicId_ = nullptr;};
        inline int64_t getMusicId() const { DARABONBA_PTR_GET_DEFAULT(musicId_, 0L) };
        inline MusicInfo& setMusicId(int64_t musicId) { DARABONBA_PTR_SET_VALUE(musicId_, musicId) };


        // musicName Field Functions 
        bool hasMusicName() const { return this->musicName_ != nullptr;};
        void deleteMusicName() { this->musicName_ = nullptr;};
        inline string getMusicName() const { DARABONBA_PTR_GET_DEFAULT(musicName_, "") };
        inline MusicInfo& setMusicName(string musicName) { DARABONBA_PTR_SET_VALUE(musicName_, musicName) };


        // musicType Field Functions 
        bool hasMusicType() const { return this->musicType_ != nullptr;};
        void deleteMusicType() { this->musicType_ = nullptr;};
        inline int64_t getMusicType() const { DARABONBA_PTR_GET_DEFAULT(musicType_, 0L) };
        inline MusicInfo& setMusicType(int64_t musicType) { DARABONBA_PTR_SET_VALUE(musicType_, musicType) };


        // musicTypeName Field Functions 
        bool hasMusicTypeName() const { return this->musicTypeName_ != nullptr;};
        void deleteMusicTypeName() { this->musicTypeName_ = nullptr;};
        inline string getMusicTypeName() const { DARABONBA_PTR_GET_DEFAULT(musicTypeName_, "") };
        inline MusicInfo& setMusicTypeName(string musicTypeName) { DARABONBA_PTR_SET_VALUE(musicTypeName_, musicTypeName) };


        // musicUrl Field Functions 
        bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
        void deleteMusicUrl() { this->musicUrl_ = nullptr;};
        inline string getMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
        inline MusicInfo& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


      protected:
        // Ringtone ID
        shared_ptr<int64_t> musicId_ {};
        // Ringtone Name
        shared_ptr<string> musicName_ {};
        // Ringtone Category ID
        shared_ptr<int64_t> musicType_ {};
        // Ringtone Category Name
        shared_ptr<string> musicTypeName_ {};
        // Ringtone URL
        shared_ptr<string> musicUrl_ {};
      };

      virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->musicInfo_ == nullptr && this->scheduleInfo_ == nullptr && this->scheduleTypeDesc_ == nullptr && this->status_ == nullptr && this->triggerDateDesc_ == nullptr
        && this->triggerTimeDesc_ == nullptr && this->volume_ == nullptr; };
      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline int64_t getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
      inline Result& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // musicInfo Field Functions 
      bool hasMusicInfo() const { return this->musicInfo_ != nullptr;};
      void deleteMusicInfo() { this->musicInfo_ = nullptr;};
      inline const Result::MusicInfo & getMusicInfo() const { DARABONBA_PTR_GET_CONST(musicInfo_, Result::MusicInfo) };
      inline Result::MusicInfo getMusicInfo() { DARABONBA_PTR_GET(musicInfo_, Result::MusicInfo) };
      inline Result& setMusicInfo(const Result::MusicInfo & musicInfo) { DARABONBA_PTR_SET_VALUE(musicInfo_, musicInfo) };
      inline Result& setMusicInfo(Result::MusicInfo && musicInfo) { DARABONBA_PTR_SET_RVALUE(musicInfo_, musicInfo) };


      // scheduleInfo Field Functions 
      bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
      void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
      inline const Result::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Result::ScheduleInfo) };
      inline Result::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Result::ScheduleInfo) };
      inline Result& setScheduleInfo(const Result::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
      inline Result& setScheduleInfo(Result::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


      // scheduleTypeDesc Field Functions 
      bool hasScheduleTypeDesc() const { return this->scheduleTypeDesc_ != nullptr;};
      void deleteScheduleTypeDesc() { this->scheduleTypeDesc_ = nullptr;};
      inline string getScheduleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(scheduleTypeDesc_, "") };
      inline Result& setScheduleTypeDesc(string scheduleTypeDesc) { DARABONBA_PTR_SET_VALUE(scheduleTypeDesc_, scheduleTypeDesc) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // triggerDateDesc Field Functions 
      bool hasTriggerDateDesc() const { return this->triggerDateDesc_ != nullptr;};
      void deleteTriggerDateDesc() { this->triggerDateDesc_ = nullptr;};
      inline string getTriggerDateDesc() const { DARABONBA_PTR_GET_DEFAULT(triggerDateDesc_, "") };
      inline Result& setTriggerDateDesc(string triggerDateDesc) { DARABONBA_PTR_SET_VALUE(triggerDateDesc_, triggerDateDesc) };


      // triggerTimeDesc Field Functions 
      bool hasTriggerTimeDesc() const { return this->triggerTimeDesc_ != nullptr;};
      void deleteTriggerTimeDesc() { this->triggerTimeDesc_ = nullptr;};
      inline string getTriggerTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(triggerTimeDesc_, "") };
      inline Result& setTriggerTimeDesc(string triggerTimeDesc) { DARABONBA_PTR_SET_VALUE(triggerTimeDesc_, triggerTimeDesc) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
      inline Result& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      // Alarm ID
      shared_ptr<int64_t> alarmId_ {};
      // Ringtone Information
      shared_ptr<Result::MusicInfo> musicInfo_ {};
      // Schedule Information
      shared_ptr<Result::ScheduleInfo> scheduleInfo_ {};
      // Chinese description of the loop type
      shared_ptr<string> scheduleTypeDesc_ {};
      // status: 0 Normal, 1 deleted, 2 shutdown
      shared_ptr<int32_t> status_ {};
      // Trigger date description (one-time)
      shared_ptr<string> triggerDateDesc_ {};
      // Trigger time description
      shared_ptr<string> triggerTimeDesc_ {};
      // Ringtone volume
      shared_ptr<int32_t> volume_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAlarmResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAlarmResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetAlarmResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetAlarmResponseBody::Result) };
    inline GetAlarmResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetAlarmResponseBody::Result) };
    inline GetAlarmResponseBody& setResult(const GetAlarmResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetAlarmResponseBody& setResult(GetAlarmResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code returned by the alarm service
    shared_ptr<int32_t> code_ {};
    // error message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Alarm details
    shared_ptr<GetAlarmResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
