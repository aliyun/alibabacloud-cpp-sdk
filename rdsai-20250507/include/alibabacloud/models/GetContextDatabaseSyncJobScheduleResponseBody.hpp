// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCJOBSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCJOBSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseSyncJobScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseSyncJobScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseSyncJobScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetContextDatabaseSyncJobScheduleResponseBody() = default ;
    GetContextDatabaseSyncJobScheduleResponseBody(const GetContextDatabaseSyncJobScheduleResponseBody &) = default ;
    GetContextDatabaseSyncJobScheduleResponseBody(GetContextDatabaseSyncJobScheduleResponseBody &&) = default ;
    GetContextDatabaseSyncJobScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseSyncJobScheduleResponseBody() = default ;
    GetContextDatabaseSyncJobScheduleResponseBody& operator=(const GetContextDatabaseSyncJobScheduleResponseBody &) = default ;
    GetContextDatabaseSyncJobScheduleResponseBody& operator=(GetContextDatabaseSyncJobScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPauseReason, autoPauseReason_);
        DARABONBA_PTR_TO_JSON(AutoPaused, autoPaused_);
        DARABONBA_PTR_TO_JSON(DailyTimes, dailyTimes_);
        DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
        DARABONBA_PTR_TO_JSON(MissedPolicy, missedPolicy_);
        DARABONBA_PTR_TO_JSON(NextRunAt, nextRunAt_);
        DARABONBA_PTR_TO_JSON(Timezone, timezone_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPauseReason, autoPauseReason_);
        DARABONBA_PTR_FROM_JSON(AutoPaused, autoPaused_);
        DARABONBA_PTR_FROM_JSON(DailyTimes, dailyTimes_);
        DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
        DARABONBA_PTR_FROM_JSON(MissedPolicy, missedPolicy_);
        DARABONBA_PTR_FROM_JSON(NextRunAt, nextRunAt_);
        DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPauseReason_ == nullptr
        && this->autoPaused_ == nullptr && this->dailyTimes_ == nullptr && this->intervalMinutes_ == nullptr && this->missedPolicy_ == nullptr && this->nextRunAt_ == nullptr
        && this->timezone_ == nullptr && this->type_ == nullptr && this->updatedAt_ == nullptr; };
      // autoPauseReason Field Functions 
      bool hasAutoPauseReason() const { return this->autoPauseReason_ != nullptr;};
      void deleteAutoPauseReason() { this->autoPauseReason_ = nullptr;};
      inline string getAutoPauseReason() const { DARABONBA_PTR_GET_DEFAULT(autoPauseReason_, "") };
      inline Data& setAutoPauseReason(string autoPauseReason) { DARABONBA_PTR_SET_VALUE(autoPauseReason_, autoPauseReason) };


      // autoPaused Field Functions 
      bool hasAutoPaused() const { return this->autoPaused_ != nullptr;};
      void deleteAutoPaused() { this->autoPaused_ = nullptr;};
      inline bool getAutoPaused() const { DARABONBA_PTR_GET_DEFAULT(autoPaused_, false) };
      inline Data& setAutoPaused(bool autoPaused) { DARABONBA_PTR_SET_VALUE(autoPaused_, autoPaused) };


      // dailyTimes Field Functions 
      bool hasDailyTimes() const { return this->dailyTimes_ != nullptr;};
      void deleteDailyTimes() { this->dailyTimes_ = nullptr;};
      inline const vector<string> & getDailyTimes() const { DARABONBA_PTR_GET_CONST(dailyTimes_, vector<string>) };
      inline vector<string> getDailyTimes() { DARABONBA_PTR_GET(dailyTimes_, vector<string>) };
      inline Data& setDailyTimes(const vector<string> & dailyTimes) { DARABONBA_PTR_SET_VALUE(dailyTimes_, dailyTimes) };
      inline Data& setDailyTimes(vector<string> && dailyTimes) { DARABONBA_PTR_SET_RVALUE(dailyTimes_, dailyTimes) };


      // intervalMinutes Field Functions 
      bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
      void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
      inline int32_t getIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
      inline Data& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


      // missedPolicy Field Functions 
      bool hasMissedPolicy() const { return this->missedPolicy_ != nullptr;};
      void deleteMissedPolicy() { this->missedPolicy_ = nullptr;};
      inline string getMissedPolicy() const { DARABONBA_PTR_GET_DEFAULT(missedPolicy_, "") };
      inline Data& setMissedPolicy(string missedPolicy) { DARABONBA_PTR_SET_VALUE(missedPolicy_, missedPolicy) };


      // nextRunAt Field Functions 
      bool hasNextRunAt() const { return this->nextRunAt_ != nullptr;};
      void deleteNextRunAt() { this->nextRunAt_ = nullptr;};
      inline string getNextRunAt() const { DARABONBA_PTR_GET_DEFAULT(nextRunAt_, "") };
      inline Data& setNextRunAt(string nextRunAt) { DARABONBA_PTR_SET_VALUE(nextRunAt_, nextRunAt) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Data& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The reason for the automatic pause.
      shared_ptr<string> autoPauseReason_ {};
      // Indicates whether the task is automatically paused.
      shared_ptr<bool> autoPaused_ {};
      // The list of daily trigger times for daily-times scheduling in the HH:mm 24-hour format. The number of times ranges from 1 to 6.
      shared_ptr<vector<string>> dailyTimes_ {};
      // The interval in minutes for interval scheduling. The minimum value is 10.
      shared_ptr<int32_t> intervalMinutes_ {};
      // The processing policy for missed schedules. Valid values: skip and catch-up.
      shared_ptr<string> missedPolicy_ {};
      // The next run time.
      shared_ptr<string> nextRunAt_ {};
      // The time zone.
      shared_ptr<string> timezone_ {};
      // The scheduling type. Valid values: interval and daily-times.
      shared_ptr<string> type_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetContextDatabaseSyncJobScheduleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetContextDatabaseSyncJobScheduleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetContextDatabaseSyncJobScheduleResponseBody::Data) };
    inline GetContextDatabaseSyncJobScheduleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetContextDatabaseSyncJobScheduleResponseBody::Data) };
    inline GetContextDatabaseSyncJobScheduleResponseBody& setData(const GetContextDatabaseSyncJobScheduleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetContextDatabaseSyncJobScheduleResponseBody& setData(GetContextDatabaseSyncJobScheduleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetContextDatabaseSyncJobScheduleResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContextDatabaseSyncJobScheduleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextDatabaseSyncJobScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetContextDatabaseSyncJobScheduleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetContextDatabaseSyncJobScheduleResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
