// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSUBREQUEST_HPP_
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
  class AddSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddSubscriptionInfoRequest, addSubscriptionInfoRequest_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddSubscriptionInfoRequest, addSubscriptionInfoRequest_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    AddSubRequest() = default ;
    AddSubRequest(const AddSubRequest &) = default ;
    AddSubRequest(AddSubRequest &&) = default ;
    AddSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSubRequest() = default ;
    AddSubRequest& operator=(const AddSubRequest &) = default ;
    AddSubRequest& operator=(AddSubRequest &&) = default ;
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
      shared_ptr<string> encodeKey_ {};
      shared_ptr<string> encodeType_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> idType_ {};
      shared_ptr<string> organizationId_ {};
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
      shared_ptr<string> encodeKey_ {};
      shared_ptr<string> encodeType_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> idType_ {};
      shared_ptr<string> organizationId_ {};
    };

    class AddSubscriptionInfoRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddSubscriptionInfoRequest& obj) { 
        DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
        DARABONBA_PTR_TO_JSON(DailyStudyCnt, dailyStudyCnt_);
        DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
        DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AddSubscriptionInfoRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
        DARABONBA_PTR_FROM_JSON(DailyStudyCnt, dailyStudyCnt_);
        DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
        DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
      };
      AddSubscriptionInfoRequest() = default ;
      AddSubscriptionInfoRequest(const AddSubscriptionInfoRequest &) = default ;
      AddSubscriptionInfoRequest(AddSubscriptionInfoRequest &&) = default ;
      AddSubscriptionInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddSubscriptionInfoRequest() = default ;
      AddSubscriptionInfoRequest& operator=(const AddSubscriptionInfoRequest &) = default ;
      AddSubscriptionInfoRequest& operator=(AddSubscriptionInfoRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScheduleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
          DARABONBA_PTR_TO_JSON(Hour, hour_);
          DARABONBA_PTR_TO_JSON(Minute, minute_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
          DARABONBA_PTR_FROM_JSON(Hour, hour_);
          DARABONBA_PTR_FROM_JSON(Minute, minute_);
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
        virtual bool empty() const override { return this->daysOfWeek_ == nullptr
        && this->hour_ == nullptr && this->minute_ == nullptr; };
        // daysOfWeek Field Functions 
        bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
        void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
        inline const vector<int32_t> & getDaysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
        inline vector<int32_t> getDaysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
        inline ScheduleInfo& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
        inline ScheduleInfo& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


        // hour Field Functions 
        bool hasHour() const { return this->hour_ != nullptr;};
        void deleteHour() { this->hour_ = nullptr;};
        inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
        inline ScheduleInfo& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


        // minute Field Functions 
        bool hasMinute() const { return this->minute_ != nullptr;};
        void deleteMinute() { this->minute_ = nullptr;};
        inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
        inline ScheduleInfo& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


      protected:
        // The specific days of the week for weekly reminders. Valid values are 1 to 7.
        shared_ptr<vector<int32_t>> daysOfWeek_ {};
        // The hour of the clock when the reminder is triggered.
        shared_ptr<int32_t> hour_ {};
        // The minute of the hour when the reminder is triggered.
        shared_ptr<int32_t> minute_ {};
      };

      virtual bool empty() const override { return this->albumId_ == nullptr
        && this->dailyStudyCnt_ == nullptr && this->playMode_ == nullptr && this->scheduleInfo_ == nullptr; };
      // albumId Field Functions 
      bool hasAlbumId() const { return this->albumId_ != nullptr;};
      void deleteAlbumId() { this->albumId_ = nullptr;};
      inline string getAlbumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
      inline AddSubscriptionInfoRequest& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


      // dailyStudyCnt Field Functions 
      bool hasDailyStudyCnt() const { return this->dailyStudyCnt_ != nullptr;};
      void deleteDailyStudyCnt() { this->dailyStudyCnt_ = nullptr;};
      inline int32_t getDailyStudyCnt() const { DARABONBA_PTR_GET_DEFAULT(dailyStudyCnt_, 0) };
      inline AddSubscriptionInfoRequest& setDailyStudyCnt(int32_t dailyStudyCnt) { DARABONBA_PTR_SET_VALUE(dailyStudyCnt_, dailyStudyCnt) };


      // playMode Field Functions 
      bool hasPlayMode() const { return this->playMode_ != nullptr;};
      void deletePlayMode() { this->playMode_ = nullptr;};
      inline string getPlayMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
      inline AddSubscriptionInfoRequest& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


      // scheduleInfo Field Functions 
      bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
      void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
      inline const AddSubscriptionInfoRequest::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, AddSubscriptionInfoRequest::ScheduleInfo) };
      inline AddSubscriptionInfoRequest::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, AddSubscriptionInfoRequest::ScheduleInfo) };
      inline AddSubscriptionInfoRequest& setScheduleInfo(const AddSubscriptionInfoRequest::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
      inline AddSubscriptionInfoRequest& setScheduleInfo(AddSubscriptionInfoRequest::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


    protected:
      // Album ID
      shared_ptr<string> albumId_ {};
      // Daily study quantity
      shared_ptr<int32_t> dailyStudyCnt_ {};
      // Playback pattern (currently only supports sequence)
      shared_ptr<string> playMode_ {};
      // Schedule information
      shared_ptr<AddSubscriptionInfoRequest::ScheduleInfo> scheduleInfo_ {};
    };

    virtual bool empty() const override { return this->addSubscriptionInfoRequest_ == nullptr
        && this->deviceInfo_ == nullptr && this->userInfo_ == nullptr; };
    // addSubscriptionInfoRequest Field Functions 
    bool hasAddSubscriptionInfoRequest() const { return this->addSubscriptionInfoRequest_ != nullptr;};
    void deleteAddSubscriptionInfoRequest() { this->addSubscriptionInfoRequest_ = nullptr;};
    inline const AddSubRequest::AddSubscriptionInfoRequest & getAddSubscriptionInfoRequest() const { DARABONBA_PTR_GET_CONST(addSubscriptionInfoRequest_, AddSubRequest::AddSubscriptionInfoRequest) };
    inline AddSubRequest::AddSubscriptionInfoRequest getAddSubscriptionInfoRequest() { DARABONBA_PTR_GET(addSubscriptionInfoRequest_, AddSubRequest::AddSubscriptionInfoRequest) };
    inline AddSubRequest& setAddSubscriptionInfoRequest(const AddSubRequest::AddSubscriptionInfoRequest & addSubscriptionInfoRequest) { DARABONBA_PTR_SET_VALUE(addSubscriptionInfoRequest_, addSubscriptionInfoRequest) };
    inline AddSubRequest& setAddSubscriptionInfoRequest(AddSubRequest::AddSubscriptionInfoRequest && addSubscriptionInfoRequest) { DARABONBA_PTR_SET_RVALUE(addSubscriptionInfoRequest_, addSubscriptionInfoRequest) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const AddSubRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, AddSubRequest::DeviceInfo) };
    inline AddSubRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, AddSubRequest::DeviceInfo) };
    inline AddSubRequest& setDeviceInfo(const AddSubRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline AddSubRequest& setDeviceInfo(AddSubRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const AddSubRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, AddSubRequest::UserInfo) };
    inline AddSubRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, AddSubRequest::UserInfo) };
    inline AddSubRequest& setUserInfo(const AddSubRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline AddSubRequest& setUserInfo(AddSubRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Subscribe to album request
    shared_ptr<AddSubRequest::AddSubscriptionInfoRequest> addSubscriptionInfoRequest_ {};
    // Device Information
    shared_ptr<AddSubRequest::DeviceInfo> deviceInfo_ {};
    // User Information
    shared_ptr<AddSubRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
