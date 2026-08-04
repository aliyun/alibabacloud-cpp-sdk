// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALARMREQUEST_HPP_
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
  class CreateAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreateAlarmRequest() = default ;
    CreateAlarmRequest(const CreateAlarmRequest &) = default ;
    CreateAlarmRequest(CreateAlarmRequest &&) = default ;
    CreateAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlarmRequest() = default ;
    CreateAlarmRequest& operator=(const CreateAlarmRequest &) = default ;
    CreateAlarmRequest& operator=(CreateAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // Value corresponding to the encoding type. When the encoding type is SKILL_ID, the value is the application\\"s Skill ID. When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding Type. There are multiple ways to obtain the User Identifier for Maojing, and each way corresponds to a different encoding Type: PACKAGE_NAME: APK package name, used for the Android application Customer link; SKILL_ID: Skill ID, used for the cloud link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User Identifier (userOpenId or userUnionId)
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of User ID: OPEN_ID: default User ID identifier; UNION_ID: organization-dimension User ID identifier, available only after an organization has been requested on the Maojing Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(MusicInfo, musicInfo_);
        DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(MusicInfo, musicInfo_);
        DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_FROM_JSON(Volume, volume_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
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
          // Collection of Days of the Week to Trigger
          shared_ptr<vector<int32_t>> daysOfWeek_ {};
          // Trigger time: hour
          shared_ptr<int32_t> hour_ {};
          // Trigger Time: Minute
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
          // Trigger time: hour
          shared_ptr<int32_t> hour_ {};
          // Trigger time: minute
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
          // Trigger Time: Day
          shared_ptr<int32_t> day_ {};
          // Trigger Time: Hour
          shared_ptr<int32_t> hour_ {};
          // Trigger time: Minute
          shared_ptr<int32_t> minute_ {};
          // Trigger time: Month
          shared_ptr<int32_t> month_ {};
          // Trigger time: Year
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
        // Statutory working day: This property is active when the loop Type is STATUTORY_WORKING_DAY.
        shared_ptr<ScheduleInfo::StatutoryWorkingDay> statutoryWorkingDay_ {};
        // Schedule Type / Loop Type:  
        // ONCE -> One-time, WEEKLY -> Weekly loop, STATUTORY_WORKING_DAY -> Statutory working day
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // Weekly Loop: This property is active when the loop Type is WEEKLY.
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
        // 
        // This parameter is required.
        shared_ptr<int64_t> musicId_ {};
        // Ringtone name
        // 
        // This parameter is required.
        shared_ptr<string> musicName_ {};
        // Ringtone category ID
        // 
        // This parameter is required.
        shared_ptr<int64_t> musicType_ {};
        // Ringtone category name
        // 
        // This parameter is required.
        shared_ptr<string> musicTypeName_ {};
        // Ringtone URL
        shared_ptr<string> musicUrl_ {};
      };

      virtual bool empty() const override { return this->musicInfo_ == nullptr
        && this->scheduleInfo_ == nullptr && this->volume_ == nullptr; };
      // musicInfo Field Functions 
      bool hasMusicInfo() const { return this->musicInfo_ != nullptr;};
      void deleteMusicInfo() { this->musicInfo_ = nullptr;};
      inline const Payload::MusicInfo & getMusicInfo() const { DARABONBA_PTR_GET_CONST(musicInfo_, Payload::MusicInfo) };
      inline Payload::MusicInfo getMusicInfo() { DARABONBA_PTR_GET(musicInfo_, Payload::MusicInfo) };
      inline Payload& setMusicInfo(const Payload::MusicInfo & musicInfo) { DARABONBA_PTR_SET_VALUE(musicInfo_, musicInfo) };
      inline Payload& setMusicInfo(Payload::MusicInfo && musicInfo) { DARABONBA_PTR_SET_RVALUE(musicInfo_, musicInfo) };


      // scheduleInfo Field Functions 
      bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
      void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
      inline const Payload::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Payload::ScheduleInfo) };
      inline Payload::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Payload::ScheduleInfo) };
      inline Payload& setScheduleInfo(const Payload::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
      inline Payload& setScheduleInfo(Payload::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
      inline Payload& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      // Ringtone information
      // 
      // This parameter is required.
      shared_ptr<Payload::MusicInfo> musicInfo_ {};
      // Schedule information
      // 
      // This parameter is required.
      shared_ptr<Payload::ScheduleInfo> scheduleInfo_ {};
      // Ringtone volume
      shared_ptr<int32_t> volume_ {};
    };

    class DeviceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      DeviceInfo() = default ;
      DeviceInfo(const DeviceInfo &) = default ;
      DeviceInfo(DeviceInfo &&) = default ;
      DeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfo() = default ;
      DeviceInfo& operator=(const DeviceInfo &) = default ;
      DeviceInfo& operator=(DeviceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline DeviceInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline DeviceInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DeviceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline DeviceInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline DeviceInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // The value corresponding to the encoding type. When the encoding type is SKILL_ID, the value is the Skill ID of the application; when the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device identity for Maojing, and each method corresponds to a different encoding type: PACKAGE_NAME: APK package name, used in the Android application customer link; SKILL_ID: skill ID, used in the cloud link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID (deviceOpenId or deviceUnionId)
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of device ID: OPEN_ID: default device ID; UNION_ID: organization-dimension device ID, available only after applying for an organization on the Maojing Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->payload_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreateAlarmRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreateAlarmRequest::DeviceInfo) };
    inline CreateAlarmRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreateAlarmRequest::DeviceInfo) };
    inline CreateAlarmRequest& setDeviceInfo(const CreateAlarmRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreateAlarmRequest& setDeviceInfo(CreateAlarmRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const CreateAlarmRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, CreateAlarmRequest::Payload) };
    inline CreateAlarmRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, CreateAlarmRequest::Payload) };
    inline CreateAlarmRequest& setPayload(const CreateAlarmRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline CreateAlarmRequest& setPayload(CreateAlarmRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateAlarmRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateAlarmRequest::UserInfo) };
    inline CreateAlarmRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CreateAlarmRequest::UserInfo) };
    inline CreateAlarmRequest& setUserInfo(const CreateAlarmRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateAlarmRequest& setUserInfo(CreateAlarmRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identity information
    // 
    // This parameter is required.
    shared_ptr<CreateAlarmRequest::DeviceInfo> deviceInfo_ {};
    // Input parameters for the service request
    // 
    // This parameter is required.
    shared_ptr<CreateAlarmRequest::Payload> payload_ {};
    // User Identifier information
    // 
    // This parameter is required.
    shared_ptr<CreateAlarmRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
