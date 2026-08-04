// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSUBRESPONSEBODY_HPP_
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
  class AddSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, AddSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    AddSubResponseBody() = default ;
    AddSubResponseBody(const AddSubResponseBody &) = default ;
    AddSubResponseBody(AddSubResponseBody &&) = default ;
    AddSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSubResponseBody() = default ;
    AddSubResponseBody& operator=(const AddSubResponseBody &) = default ;
    AddSubResponseBody& operator=(AddSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
        DARABONBA_PTR_TO_JSON(DailyStudyCnt, dailyStudyCnt_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
        DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
        DARABONBA_PTR_FROM_JSON(DailyStudyCnt, dailyStudyCnt_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
        DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        // The epoch for trigger
        shared_ptr<vector<int32_t>> daysOfWeek_ {};
        // The hour of the clock when the trigger occurs.
        shared_ptr<int32_t> hour_ {};
        // The minute of the Time when the trigger occurs.
        shared_ptr<int32_t> minute_ {};
      };

      virtual bool empty() const override { return this->albumId_ == nullptr
        && this->dailyStudyCnt_ == nullptr && this->deviceId_ == nullptr && this->id_ == nullptr && this->playMode_ == nullptr && this->scheduleInfo_ == nullptr
        && this->userId_ == nullptr; };
      // albumId Field Functions 
      bool hasAlbumId() const { return this->albumId_ != nullptr;};
      void deleteAlbumId() { this->albumId_ = nullptr;};
      inline string getAlbumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
      inline Result& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


      // dailyStudyCnt Field Functions 
      bool hasDailyStudyCnt() const { return this->dailyStudyCnt_ != nullptr;};
      void deleteDailyStudyCnt() { this->dailyStudyCnt_ = nullptr;};
      inline int32_t getDailyStudyCnt() const { DARABONBA_PTR_GET_DEFAULT(dailyStudyCnt_, 0) };
      inline Result& setDailyStudyCnt(int32_t dailyStudyCnt) { DARABONBA_PTR_SET_VALUE(dailyStudyCnt_, dailyStudyCnt) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Result& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // playMode Field Functions 
      bool hasPlayMode() const { return this->playMode_ != nullptr;};
      void deletePlayMode() { this->playMode_ = nullptr;};
      inline string getPlayMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
      inline Result& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


      // scheduleInfo Field Functions 
      bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
      void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
      inline const Result::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Result::ScheduleInfo) };
      inline Result::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Result::ScheduleInfo) };
      inline Result& setScheduleInfo(const Result::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
      inline Result& setScheduleInfo(Result::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Result& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Album ID
      shared_ptr<string> albumId_ {};
      // Daily study quantity
      shared_ptr<int32_t> dailyStudyCnt_ {};
      // Device ID
      shared_ptr<string> deviceId_ {};
      // Subscription record ID
      shared_ptr<int64_t> id_ {};
      // Playback mode
      shared_ptr<string> playMode_ {};
      // Schedule information
      shared_ptr<Result::ScheduleInfo> scheduleInfo_ {};
      // User ID
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddSubResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddSubResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AddSubResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, AddSubResponseBody::Result) };
    inline AddSubResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, AddSubResponseBody::Result) };
    inline AddSubResponseBody& setResult(const AddSubResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AddSubResponseBody& setResult(AddSubResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code. A value of 200 indicates success.
    shared_ptr<int32_t> code_ {};
    // Additional information
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return Result
    shared_ptr<AddSubResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
