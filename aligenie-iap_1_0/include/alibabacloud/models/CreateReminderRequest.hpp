// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMINDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMINDERREQUEST_HPP_
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
  class CreateReminderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReminderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReminderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreateReminderRequest() = default ;
    CreateReminderRequest(const CreateReminderRequest &) = default ;
    CreateReminderRequest(CreateReminderRequest &&) = default ;
    CreateReminderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReminderRequest() = default ;
    CreateReminderRequest& operator=(const CreateReminderRequest &) = default ;
    CreateReminderRequest& operator=(CreateReminderRequest &&) = default ;
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
      // The value corresponding to the encoding type:  
      // - When the encoding type is SKILL_ID, the value is the Skill ID of the application.  
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier for Tmall Genie, and each method corresponds to a different encoding type.  
      // - PACKAGE_NAME: APK package name, used in the Android application customer flow  
      // - SKILL_ID: Skill ID, used in the cloud-based flow
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, set to either userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of the User ID:  
      // - OPEN_ID: The default User ID identity.  
      // - UNION_ID: The User ID identity at the organization dimension. This value is available only after an organization has been requested on the Tmall Genie Skills Application Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. This parameter is required when **IdType** is configured as **UNION_ID**.
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
        DARABONBA_PTR_TO_JSON(RecurrenceRule, recurrenceRule_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
        DARABONBA_PTR_FROM_JSON(RecurrenceRule, recurrenceRule_);
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
        inline int64_t getEndDateTime() const { DARABONBA_PTR_GET_DEFAULT(endDateTime_, 0L) };
        inline RecurrenceRule& setEndDateTime(int64_t endDateTime) { DARABONBA_PTR_SET_VALUE(endDateTime_, endDateTime) };


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
        inline int64_t getStartDateTime() const { DARABONBA_PTR_GET_DEFAULT(startDateTime_, 0L) };
        inline RecurrenceRule& setStartDateTime(int64_t startDateTime) { DARABONBA_PTR_SET_VALUE(startDateTime_, startDateTime) };


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
        inline RecurrenceRule& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // The date on which the reminder is triggered.
        shared_ptr<int32_t> day_ {};
        // Configure monthly reminders, indicating the day of the month when the reminder is triggered.
        shared_ptr<vector<int32_t>> daysOfMonth_ {};
        // Configure weekly reminders, indicating on which days of the week the reminder is triggered.
        shared_ptr<vector<int32_t>> daysOfWeek_ {};
        // The expiration time when the reminder ends, in milliseconds UNIX timestamp.
        // 
        // This parameter is required.
        shared_ptr<int64_t> endDateTime_ {};
        // Loop type:
        // 
        // - ONCE: One-time
        // - DAILY: Daily
        // - WEEKLY: Weekly
        // - MONTHLY: Monthly
        // 
        // This parameter is required.
        shared_ptr<string> freq_ {};
        // The hour of the time when the reminder is triggered.
        // 
        // This parameter is required.
        shared_ptr<int32_t> hour_ {};
        // The minute of the time when the reminder is triggered.
        shared_ptr<int32_t> minute_ {};
        // The month in which the reminder is triggered.
        shared_ptr<int32_t> month_ {};
        // The second of the time when the reminder is triggered.
        shared_ptr<int32_t> second_ {};
        // The effective start time of the reminder, in milliseconds as a UNIX timestamp.
        // 
        // This parameter is required.
        shared_ptr<int64_t> startDateTime_ {};
        // The year of the time when the reminder is triggered.
        shared_ptr<int32_t> year_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->isDebug_ == nullptr && this->recurrenceRule_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Payload& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // isDebug Field Functions 
      bool hasIsDebug() const { return this->isDebug_ != nullptr;};
      void deleteIsDebug() { this->isDebug_ = nullptr;};
      inline bool getIsDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
      inline Payload& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


      // recurrenceRule Field Functions 
      bool hasRecurrenceRule() const { return this->recurrenceRule_ != nullptr;};
      void deleteRecurrenceRule() { this->recurrenceRule_ = nullptr;};
      inline const Payload::RecurrenceRule & getRecurrenceRule() const { DARABONBA_PTR_GET_CONST(recurrenceRule_, Payload::RecurrenceRule) };
      inline Payload::RecurrenceRule getRecurrenceRule() { DARABONBA_PTR_GET(recurrenceRule_, Payload::RecurrenceRule) };
      inline Payload& setRecurrenceRule(const Payload::RecurrenceRule & recurrenceRule) { DARABONBA_PTR_SET_VALUE(recurrenceRule_, recurrenceRule) };
      inline Payload& setRecurrenceRule(Payload::RecurrenceRule && recurrenceRule) { DARABONBA_PTR_SET_RVALUE(recurrenceRule_, recurrenceRule) };


    protected:
      // The detailed content of the reminder message.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // Indicates whether this invocation is for debug purposes.
      // 
      // This parameter is required.
      shared_ptr<bool> isDebug_ {};
      // Scheduling information for the reminder.
      // 
      // This parameter is required.
      shared_ptr<Payload::RecurrenceRule> recurrenceRule_ {};
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
      // The value corresponding to the encoding type.
      // 
      // - When the encoding type is set to SKILL_ID, the value is the application\\"s Skill ID.
      // - When the encoding type is set to PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID for Tmall Genie, and each method corresponds to a different encoding type.  
      // - PACKAGE_NAME: APK package name, used in the Android application customer flow.  
      // - SKILL_ID: Skill ID, used in the cloud-based flow.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to either deviceOpenId or deviceUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of the device ID:  
      // - OPEN_ID: Default device ID identifier.  
      // - UNION_ID: Organization-level device ID identifier. This value is available only after an organization has been registered on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. This parameter is required when **IdType** is set to **UNION_ID**.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->payload_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreateReminderRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreateReminderRequest::DeviceInfo) };
    inline CreateReminderRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreateReminderRequest::DeviceInfo) };
    inline CreateReminderRequest& setDeviceInfo(const CreateReminderRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreateReminderRequest& setDeviceInfo(CreateReminderRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const CreateReminderRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, CreateReminderRequest::Payload) };
    inline CreateReminderRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, CreateReminderRequest::Payload) };
    inline CreateReminderRequest& setPayload(const CreateReminderRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline CreateReminderRequest& setPayload(CreateReminderRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateReminderRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateReminderRequest::UserInfo) };
    inline CreateReminderRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CreateReminderRequest::UserInfo) };
    inline CreateReminderRequest& setUserInfo(const CreateReminderRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateReminderRequest& setUserInfo(CreateReminderRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identification information.
    // 
    // This parameter is required.
    shared_ptr<CreateReminderRequest::DeviceInfo> deviceInfo_ {};
    // The input parameters for this service request.
    // 
    // This parameter is required.
    shared_ptr<CreateReminderRequest::Payload> payload_ {};
    // User identifier information.
    // 
    // This parameter is required.
    shared_ptr<CreateReminderRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
