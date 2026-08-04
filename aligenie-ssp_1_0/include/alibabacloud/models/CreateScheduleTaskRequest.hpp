// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUEST_HPP_
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
  class CreateScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreateScheduleTaskRequest() = default ;
    CreateScheduleTaskRequest(const CreateScheduleTaskRequest &) = default ;
    CreateScheduleTaskRequest(CreateScheduleTaskRequest &&) = default ;
    CreateScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequest() = default ;
    CreateScheduleTaskRequest& operator=(const CreateScheduleTaskRequest &) = default ;
    CreateScheduleTaskRequest& operator=(CreateScheduleTaskRequest &&) = default ;
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
      // The value corresponding to the encoding type. When the encoding type is SKILL_ID, the value is the application\\"s SkillID. When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      shared_ptr<string> encodeKey_ {};
      // Encoding Type. There are multiple ways to obtain the user identifier for Maojing, and each method corresponds to a different encoding type: PACKAGE_NAME: APK package name, used for Android application customer links; SKILL_ID: Skill ID, used for cloud-based links.
      shared_ptr<string> encodeType_ {};
      // User Identifier (userOpenId or userUnionId)
      shared_ptr<string> id_ {};
      // Type of User ID:  
      // - OPEN_ID: The default User ID identity.  
      // - UNION_ID: The User ID identity at the organization dimension. This is available only after an organization has been requested on the Maojing Skill Application Open Platform.
      shared_ptr<string> idType_ {};
      // Organization ID; Required if IdType is UNION_ID
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(ActionDTOs, actionDTOs_);
        DARABONBA_PTR_TO_JSON(IdempotentId, idempotentId_);
        DARABONBA_PTR_TO_JSON(ScheduleDTO, scheduleDTO_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionDTOs, actionDTOs_);
        DARABONBA_PTR_FROM_JSON(IdempotentId, idempotentId_);
        DARABONBA_PTR_FROM_JSON(ScheduleDTO, scheduleDTO_);
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
      class ScheduleDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleDTO& obj) { 
          DARABONBA_PTR_TO_JSON(Once, once_);
          DARABONBA_PTR_TO_JSON(ScheduleEndTime, scheduleEndTime_);
          DARABONBA_PTR_TO_JSON(ScheduleStartTime, scheduleStartTime_);
          DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_TO_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
          DARABONBA_PTR_TO_JSON(Weekly, weekly_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(Once, once_);
          DARABONBA_PTR_FROM_JSON(ScheduleEndTime, scheduleEndTime_);
          DARABONBA_PTR_FROM_JSON(ScheduleStartTime, scheduleStartTime_);
          DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_FROM_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
          DARABONBA_PTR_FROM_JSON(Weekly, weekly_);
        };
        ScheduleDTO() = default ;
        ScheduleDTO(const ScheduleDTO &) = default ;
        ScheduleDTO(ScheduleDTO &&) = default ;
        ScheduleDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleDTO() = default ;
        ScheduleDTO& operator=(const ScheduleDTO &) = default ;
        ScheduleDTO& operator=(ScheduleDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Weekly : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Weekly& obj) { 
            DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_TO_JSON(Hours, hours_);
            DARABONBA_PTR_TO_JSON(Minutes, minutes_);
          };
          friend void from_json(const Darabonba::Json& j, Weekly& obj) { 
            DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_FROM_JSON(Hours, hours_);
            DARABONBA_PTR_FROM_JSON(Minutes, minutes_);
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
        && this->hours_ == nullptr && this->minutes_ == nullptr; };
          // daysOfWeek Field Functions 
          bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
          void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
          inline const vector<int32_t> & getDaysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
          inline vector<int32_t> getDaysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
          inline Weekly& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
          inline Weekly& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


          // hours Field Functions 
          bool hasHours() const { return this->hours_ != nullptr;};
          void deleteHours() { this->hours_ = nullptr;};
          inline const vector<int32_t> & getHours() const { DARABONBA_PTR_GET_CONST(hours_, vector<int32_t>) };
          inline vector<int32_t> getHours() { DARABONBA_PTR_GET(hours_, vector<int32_t>) };
          inline Weekly& setHours(const vector<int32_t> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
          inline Weekly& setHours(vector<int32_t> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


          // minutes Field Functions 
          bool hasMinutes() const { return this->minutes_ != nullptr;};
          void deleteMinutes() { this->minutes_ = nullptr;};
          inline const vector<int32_t> & getMinutes() const { DARABONBA_PTR_GET_CONST(minutes_, vector<int32_t>) };
          inline vector<int32_t> getMinutes() { DARABONBA_PTR_GET(minutes_, vector<int32_t>) };
          inline Weekly& setMinutes(const vector<int32_t> & minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };
          inline Weekly& setMinutes(vector<int32_t> && minutes) { DARABONBA_PTR_SET_RVALUE(minutes_, minutes) };


        protected:
          // Trigger days of the week, where 1–7 represent Monday through Sunday, respectively
          shared_ptr<vector<int32_t>> daysOfWeek_ {};
          // Trigger hour
          shared_ptr<vector<int32_t>> hours_ {};
          // Trigger minute
          shared_ptr<vector<int32_t>> minutes_ {};
        };

        class StatutoryWorkingDay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatutoryWorkingDay& obj) { 
            DARABONBA_PTR_TO_JSON(Hours, hours_);
            DARABONBA_PTR_TO_JSON(Minutes, minutes_);
          };
          friend void from_json(const Darabonba::Json& j, StatutoryWorkingDay& obj) { 
            DARABONBA_PTR_FROM_JSON(Hours, hours_);
            DARABONBA_PTR_FROM_JSON(Minutes, minutes_);
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
          virtual bool empty() const override { return this->hours_ == nullptr
        && this->minutes_ == nullptr; };
          // hours Field Functions 
          bool hasHours() const { return this->hours_ != nullptr;};
          void deleteHours() { this->hours_ = nullptr;};
          inline const vector<int32_t> & getHours() const { DARABONBA_PTR_GET_CONST(hours_, vector<int32_t>) };
          inline vector<int32_t> getHours() { DARABONBA_PTR_GET(hours_, vector<int32_t>) };
          inline StatutoryWorkingDay& setHours(const vector<int32_t> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
          inline StatutoryWorkingDay& setHours(vector<int32_t> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


          // minutes Field Functions 
          bool hasMinutes() const { return this->minutes_ != nullptr;};
          void deleteMinutes() { this->minutes_ = nullptr;};
          inline const vector<int32_t> & getMinutes() const { DARABONBA_PTR_GET_CONST(minutes_, vector<int32_t>) };
          inline vector<int32_t> getMinutes() { DARABONBA_PTR_GET(minutes_, vector<int32_t>) };
          inline StatutoryWorkingDay& setMinutes(const vector<int32_t> & minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };
          inline StatutoryWorkingDay& setMinutes(vector<int32_t> && minutes) { DARABONBA_PTR_SET_RVALUE(minutes_, minutes) };


        protected:
          // Trigger hour; Multiple Choice
          shared_ptr<vector<int32_t>> hours_ {};
          // Trigger minute; Multiple Choice
          shared_ptr<vector<int32_t>> minutes_ {};
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
          // Trigger day
          shared_ptr<int32_t> day_ {};
          // Trigger Hour
          shared_ptr<int32_t> hour_ {};
          // Trigger Minute
          shared_ptr<int32_t> minute_ {};
          // Trigger Month
          shared_ptr<int32_t> month_ {};
          // Trigger Year
          shared_ptr<int32_t> year_ {};
        };

        virtual bool empty() const override { return this->once_ == nullptr
        && this->scheduleEndTime_ == nullptr && this->scheduleStartTime_ == nullptr && this->scheduleType_ == nullptr && this->statutoryWorkingDay_ == nullptr && this->weekly_ == nullptr; };
        // once Field Functions 
        bool hasOnce() const { return this->once_ != nullptr;};
        void deleteOnce() { this->once_ = nullptr;};
        inline const ScheduleDTO::Once & getOnce() const { DARABONBA_PTR_GET_CONST(once_, ScheduleDTO::Once) };
        inline ScheduleDTO::Once getOnce() { DARABONBA_PTR_GET(once_, ScheduleDTO::Once) };
        inline ScheduleDTO& setOnce(const ScheduleDTO::Once & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
        inline ScheduleDTO& setOnce(ScheduleDTO::Once && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


        // scheduleEndTime Field Functions 
        bool hasScheduleEndTime() const { return this->scheduleEndTime_ != nullptr;};
        void deleteScheduleEndTime() { this->scheduleEndTime_ = nullptr;};
        inline int64_t getScheduleEndTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleEndTime_, 0L) };
        inline ScheduleDTO& setScheduleEndTime(int64_t scheduleEndTime) { DARABONBA_PTR_SET_VALUE(scheduleEndTime_, scheduleEndTime) };


        // scheduleStartTime Field Functions 
        bool hasScheduleStartTime() const { return this->scheduleStartTime_ != nullptr;};
        void deleteScheduleStartTime() { this->scheduleStartTime_ = nullptr;};
        inline int64_t getScheduleStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleStartTime_, 0L) };
        inline ScheduleDTO& setScheduleStartTime(int64_t scheduleStartTime) { DARABONBA_PTR_SET_VALUE(scheduleStartTime_, scheduleStartTime) };


        // scheduleType Field Functions 
        bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
        void deleteScheduleType() { this->scheduleType_ = nullptr;};
        inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
        inline ScheduleDTO& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


        // statutoryWorkingDay Field Functions 
        bool hasStatutoryWorkingDay() const { return this->statutoryWorkingDay_ != nullptr;};
        void deleteStatutoryWorkingDay() { this->statutoryWorkingDay_ = nullptr;};
        inline const ScheduleDTO::StatutoryWorkingDay & getStatutoryWorkingDay() const { DARABONBA_PTR_GET_CONST(statutoryWorkingDay_, ScheduleDTO::StatutoryWorkingDay) };
        inline ScheduleDTO::StatutoryWorkingDay getStatutoryWorkingDay() { DARABONBA_PTR_GET(statutoryWorkingDay_, ScheduleDTO::StatutoryWorkingDay) };
        inline ScheduleDTO& setStatutoryWorkingDay(const ScheduleDTO::StatutoryWorkingDay & statutoryWorkingDay) { DARABONBA_PTR_SET_VALUE(statutoryWorkingDay_, statutoryWorkingDay) };
        inline ScheduleDTO& setStatutoryWorkingDay(ScheduleDTO::StatutoryWorkingDay && statutoryWorkingDay) { DARABONBA_PTR_SET_RVALUE(statutoryWorkingDay_, statutoryWorkingDay) };


        // weekly Field Functions 
        bool hasWeekly() const { return this->weekly_ != nullptr;};
        void deleteWeekly() { this->weekly_ = nullptr;};
        inline const ScheduleDTO::Weekly & getWeekly() const { DARABONBA_PTR_GET_CONST(weekly_, ScheduleDTO::Weekly) };
        inline ScheduleDTO::Weekly getWeekly() { DARABONBA_PTR_GET(weekly_, ScheduleDTO::Weekly) };
        inline ScheduleDTO& setWeekly(const ScheduleDTO::Weekly & weekly) { DARABONBA_PTR_SET_VALUE(weekly_, weekly) };
        inline ScheduleDTO& setWeekly(ScheduleDTO::Weekly && weekly) { DARABONBA_PTR_SET_RVALUE(weekly_, weekly) };


      protected:
        // One-time Scan Configuration
        shared_ptr<ScheduleDTO::Once> once_ {};
        // Schedule end time
        // 
        // This parameter is required.
        shared_ptr<int64_t> scheduleEndTime_ {};
        // Schedule Start Time
        // 
        // This parameter is required.
        shared_ptr<int64_t> scheduleStartTime_ {};
        // Schedule Type
        // 
        // This parameter is required.
        shared_ptr<string> scheduleType_ {};
        // Statutory working day schedule configuration
        shared_ptr<ScheduleDTO::StatutoryWorkingDay> statutoryWorkingDay_ {};
        // Loop schedule configuration
        shared_ptr<ScheduleDTO::Weekly> weekly_ {};
      };

      class ActionDTOs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActionDTOs& obj) { 
          DARABONBA_ANY_TO_JSON(customAction, customAction_);
        };
        friend void from_json(const Darabonba::Json& j, ActionDTOs& obj) { 
          DARABONBA_ANY_FROM_JSON(customAction, customAction_);
        };
        ActionDTOs() = default ;
        ActionDTOs(const ActionDTOs &) = default ;
        ActionDTOs(ActionDTOs &&) = default ;
        ActionDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActionDTOs() = default ;
        ActionDTOs& operator=(const ActionDTOs &) = default ;
        ActionDTOs& operator=(ActionDTOs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customAction_ == nullptr; };
        // customAction Field Functions 
        bool hasCustomAction() const { return this->customAction_ != nullptr;};
        void deleteCustomAction() { this->customAction_ = nullptr;};
        inline         const Darabonba::Json & getCustomAction() const { DARABONBA_GET(customAction_) };
        Darabonba::Json & getCustomAction() { DARABONBA_GET(customAction_) };
        inline ActionDTOs& setCustomAction(const Darabonba::Json & customAction) { DARABONBA_SET_VALUE(customAction_, customAction) };
        inline ActionDTOs& setCustomAction(Darabonba::Json && customAction) { DARABONBA_SET_RVALUE(customAction_, customAction) };


      protected:
        // Vendor-defined command
        Darabonba::Json customAction_ {};
      };

      virtual bool empty() const override { return this->actionDTOs_ == nullptr
        && this->idempotentId_ == nullptr && this->scheduleDTO_ == nullptr; };
      // actionDTOs Field Functions 
      bool hasActionDTOs() const { return this->actionDTOs_ != nullptr;};
      void deleteActionDTOs() { this->actionDTOs_ = nullptr;};
      inline const vector<Payload::ActionDTOs> & getActionDTOs() const { DARABONBA_PTR_GET_CONST(actionDTOs_, vector<Payload::ActionDTOs>) };
      inline vector<Payload::ActionDTOs> getActionDTOs() { DARABONBA_PTR_GET(actionDTOs_, vector<Payload::ActionDTOs>) };
      inline Payload& setActionDTOs(const vector<Payload::ActionDTOs> & actionDTOs) { DARABONBA_PTR_SET_VALUE(actionDTOs_, actionDTOs) };
      inline Payload& setActionDTOs(vector<Payload::ActionDTOs> && actionDTOs) { DARABONBA_PTR_SET_RVALUE(actionDTOs_, actionDTOs) };


      // idempotentId Field Functions 
      bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
      void deleteIdempotentId() { this->idempotentId_ = nullptr;};
      inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
      inline Payload& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


      // scheduleDTO Field Functions 
      bool hasScheduleDTO() const { return this->scheduleDTO_ != nullptr;};
      void deleteScheduleDTO() { this->scheduleDTO_ = nullptr;};
      inline const Payload::ScheduleDTO & getScheduleDTO() const { DARABONBA_PTR_GET_CONST(scheduleDTO_, Payload::ScheduleDTO) };
      inline Payload::ScheduleDTO getScheduleDTO() { DARABONBA_PTR_GET(scheduleDTO_, Payload::ScheduleDTO) };
      inline Payload& setScheduleDTO(const Payload::ScheduleDTO & scheduleDTO) { DARABONBA_PTR_SET_VALUE(scheduleDTO_, scheduleDTO) };
      inline Payload& setScheduleDTO(Payload::ScheduleDTO && scheduleDTO) { DARABONBA_PTR_SET_RVALUE(scheduleDTO_, scheduleDTO) };


    protected:
      // Scheduling action parameters
      // 
      // This parameter is required.
      shared_ptr<vector<Payload::ActionDTOs>> actionDTOs_ {};
      // Idempotent ID
      shared_ptr<string> idempotentId_ {};
      // Scheduling information
      // 
      // This parameter is required.
      shared_ptr<Payload::ScheduleDTO> scheduleDTO_ {};
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
      // The value corresponding to the encoding type. When the encoding type is SKILL_ID, the value is the SkillID of the application. When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client application.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device identity for Maojing, and each method corresponds to a different encoding type: PACKAGE_NAME: APK package name, used for Android application customer linkage; SKILL_ID: skill ID, used for cloud linkage.
      shared_ptr<string> encodeType_ {};
      // Device ID (deviceOpenId or deviceUnionId)
      shared_ptr<string> id_ {};
      // Type of device ID: OPEN_ID: default device ID; UNION_ID: organization-level device ID, available only after applying for an organization in the Maojing Skill Application Open Platform.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->payload_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreateScheduleTaskRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreateScheduleTaskRequest::DeviceInfo) };
    inline CreateScheduleTaskRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreateScheduleTaskRequest::DeviceInfo) };
    inline CreateScheduleTaskRequest& setDeviceInfo(const CreateScheduleTaskRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreateScheduleTaskRequest& setDeviceInfo(CreateScheduleTaskRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const CreateScheduleTaskRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, CreateScheduleTaskRequest::Payload) };
    inline CreateScheduleTaskRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, CreateScheduleTaskRequest::Payload) };
    inline CreateScheduleTaskRequest& setPayload(const CreateScheduleTaskRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline CreateScheduleTaskRequest& setPayload(CreateScheduleTaskRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateScheduleTaskRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateScheduleTaskRequest::UserInfo) };
    inline CreateScheduleTaskRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CreateScheduleTaskRequest::UserInfo) };
    inline CreateScheduleTaskRequest& setUserInfo(const CreateScheduleTaskRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateScheduleTaskRequest& setUserInfo(CreateScheduleTaskRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identity information
    // 
    // This parameter is required.
    shared_ptr<CreateScheduleTaskRequest::DeviceInfo> deviceInfo_ {};
    // Input parameters for the service request
    // 
    // This parameter is required.
    shared_ptr<CreateScheduleTaskRequest::Payload> payload_ {};
    // User Identifier Information
    // 
    // This parameter is required.
    shared_ptr<CreateScheduleTaskRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
