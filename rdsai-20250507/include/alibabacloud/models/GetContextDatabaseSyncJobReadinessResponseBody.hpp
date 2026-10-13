// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCJOBREADINESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASESYNCJOBREADINESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseSyncJobReadinessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseSyncJobReadinessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseSyncJobReadinessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetContextDatabaseSyncJobReadinessResponseBody() = default ;
    GetContextDatabaseSyncJobReadinessResponseBody(const GetContextDatabaseSyncJobReadinessResponseBody &) = default ;
    GetContextDatabaseSyncJobReadinessResponseBody(GetContextDatabaseSyncJobReadinessResponseBody &&) = default ;
    GetContextDatabaseSyncJobReadinessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseSyncJobReadinessResponseBody() = default ;
    GetContextDatabaseSyncJobReadinessResponseBody& operator=(const GetContextDatabaseSyncJobReadinessResponseBody &) = default ;
    GetContextDatabaseSyncJobReadinessResponseBody& operator=(GetContextDatabaseSyncJobReadinessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPauseReason, autoPauseReason_);
        DARABONBA_PTR_TO_JSON(Checks, checks_);
        DARABONBA_PTR_TO_JSON(Ready, ready_);
        DARABONBA_PTR_TO_JSON(ReadyForManualRun, readyForManualRun_);
        DARABONBA_PTR_TO_JSON(ReadyForScheduledRun, readyForScheduledRun_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPauseReason, autoPauseReason_);
        DARABONBA_PTR_FROM_JSON(Checks, checks_);
        DARABONBA_PTR_FROM_JSON(Ready, ready_);
        DARABONBA_PTR_FROM_JSON(ReadyForManualRun, readyForManualRun_);
        DARABONBA_PTR_FROM_JSON(ReadyForScheduledRun, readyForScheduledRun_);
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
      class Checks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Checks& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionReady, connectionReady_);
          DARABONBA_PTR_TO_JSON(JobEnabled, jobEnabled_);
          DARABONBA_PTR_TO_JSON(ScheduleConfigured, scheduleConfigured_);
          DARABONBA_PTR_TO_JSON(ScheduleNotAutoPaused, scheduleNotAutoPaused_);
          DARABONBA_PTR_TO_JSON(SelectionConfirmed, selectionConfirmed_);
          DARABONBA_PTR_TO_JSON(TargetReady, targetReady_);
        };
        friend void from_json(const Darabonba::Json& j, Checks& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionReady, connectionReady_);
          DARABONBA_PTR_FROM_JSON(JobEnabled, jobEnabled_);
          DARABONBA_PTR_FROM_JSON(ScheduleConfigured, scheduleConfigured_);
          DARABONBA_PTR_FROM_JSON(ScheduleNotAutoPaused, scheduleNotAutoPaused_);
          DARABONBA_PTR_FROM_JSON(SelectionConfirmed, selectionConfirmed_);
          DARABONBA_PTR_FROM_JSON(TargetReady, targetReady_);
        };
        Checks() = default ;
        Checks(const Checks &) = default ;
        Checks(Checks &&) = default ;
        Checks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Checks() = default ;
        Checks& operator=(const Checks &) = default ;
        Checks& operator=(Checks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionReady_ == nullptr
        && this->jobEnabled_ == nullptr && this->scheduleConfigured_ == nullptr && this->scheduleNotAutoPaused_ == nullptr && this->selectionConfirmed_ == nullptr && this->targetReady_ == nullptr; };
        // connectionReady Field Functions 
        bool hasConnectionReady() const { return this->connectionReady_ != nullptr;};
        void deleteConnectionReady() { this->connectionReady_ = nullptr;};
        inline bool getConnectionReady() const { DARABONBA_PTR_GET_DEFAULT(connectionReady_, false) };
        inline Checks& setConnectionReady(bool connectionReady) { DARABONBA_PTR_SET_VALUE(connectionReady_, connectionReady) };


        // jobEnabled Field Functions 
        bool hasJobEnabled() const { return this->jobEnabled_ != nullptr;};
        void deleteJobEnabled() { this->jobEnabled_ = nullptr;};
        inline bool getJobEnabled() const { DARABONBA_PTR_GET_DEFAULT(jobEnabled_, false) };
        inline Checks& setJobEnabled(bool jobEnabled) { DARABONBA_PTR_SET_VALUE(jobEnabled_, jobEnabled) };


        // scheduleConfigured Field Functions 
        bool hasScheduleConfigured() const { return this->scheduleConfigured_ != nullptr;};
        void deleteScheduleConfigured() { this->scheduleConfigured_ = nullptr;};
        inline bool getScheduleConfigured() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigured_, false) };
        inline Checks& setScheduleConfigured(bool scheduleConfigured) { DARABONBA_PTR_SET_VALUE(scheduleConfigured_, scheduleConfigured) };


        // scheduleNotAutoPaused Field Functions 
        bool hasScheduleNotAutoPaused() const { return this->scheduleNotAutoPaused_ != nullptr;};
        void deleteScheduleNotAutoPaused() { this->scheduleNotAutoPaused_ = nullptr;};
        inline bool getScheduleNotAutoPaused() const { DARABONBA_PTR_GET_DEFAULT(scheduleNotAutoPaused_, false) };
        inline Checks& setScheduleNotAutoPaused(bool scheduleNotAutoPaused) { DARABONBA_PTR_SET_VALUE(scheduleNotAutoPaused_, scheduleNotAutoPaused) };


        // selectionConfirmed Field Functions 
        bool hasSelectionConfirmed() const { return this->selectionConfirmed_ != nullptr;};
        void deleteSelectionConfirmed() { this->selectionConfirmed_ = nullptr;};
        inline bool getSelectionConfirmed() const { DARABONBA_PTR_GET_DEFAULT(selectionConfirmed_, false) };
        inline Checks& setSelectionConfirmed(bool selectionConfirmed) { DARABONBA_PTR_SET_VALUE(selectionConfirmed_, selectionConfirmed) };


        // targetReady Field Functions 
        bool hasTargetReady() const { return this->targetReady_ != nullptr;};
        void deleteTargetReady() { this->targetReady_ = nullptr;};
        inline bool getTargetReady() const { DARABONBA_PTR_GET_DEFAULT(targetReady_, false) };
        inline Checks& setTargetReady(bool targetReady) { DARABONBA_PTR_SET_VALUE(targetReady_, targetReady) };


      protected:
        // Indicates whether the data source is ready.
        shared_ptr<bool> connectionReady_ {};
        // Indicates whether the import task is enabled.
        shared_ptr<bool> jobEnabled_ {};
        // Indicates whether scheduling is configured.
        shared_ptr<bool> scheduleConfigured_ {};
        // Indicates whether scheduling is not automatically paused.
        shared_ptr<bool> scheduleNotAutoPaused_ {};
        // Indicates whether the selection is confirmed.
        shared_ptr<bool> selectionConfirmed_ {};
        // Indicates whether the target is ready.
        shared_ptr<bool> targetReady_ {};
      };

      virtual bool empty() const override { return this->autoPauseReason_ == nullptr
        && this->checks_ == nullptr && this->ready_ == nullptr && this->readyForManualRun_ == nullptr && this->readyForScheduledRun_ == nullptr; };
      // autoPauseReason Field Functions 
      bool hasAutoPauseReason() const { return this->autoPauseReason_ != nullptr;};
      void deleteAutoPauseReason() { this->autoPauseReason_ = nullptr;};
      inline string getAutoPauseReason() const { DARABONBA_PTR_GET_DEFAULT(autoPauseReason_, "") };
      inline Data& setAutoPauseReason(string autoPauseReason) { DARABONBA_PTR_SET_VALUE(autoPauseReason_, autoPauseReason) };


      // checks Field Functions 
      bool hasChecks() const { return this->checks_ != nullptr;};
      void deleteChecks() { this->checks_ = nullptr;};
      inline const Data::Checks & getChecks() const { DARABONBA_PTR_GET_CONST(checks_, Data::Checks) };
      inline Data::Checks getChecks() { DARABONBA_PTR_GET(checks_, Data::Checks) };
      inline Data& setChecks(const Data::Checks & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
      inline Data& setChecks(Data::Checks && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


      // ready Field Functions 
      bool hasReady() const { return this->ready_ != nullptr;};
      void deleteReady() { this->ready_ = nullptr;};
      inline bool getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, false) };
      inline Data& setReady(bool ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


      // readyForManualRun Field Functions 
      bool hasReadyForManualRun() const { return this->readyForManualRun_ != nullptr;};
      void deleteReadyForManualRun() { this->readyForManualRun_ = nullptr;};
      inline bool getReadyForManualRun() const { DARABONBA_PTR_GET_DEFAULT(readyForManualRun_, false) };
      inline Data& setReadyForManualRun(bool readyForManualRun) { DARABONBA_PTR_SET_VALUE(readyForManualRun_, readyForManualRun) };


      // readyForScheduledRun Field Functions 
      bool hasReadyForScheduledRun() const { return this->readyForScheduledRun_ != nullptr;};
      void deleteReadyForScheduledRun() { this->readyForScheduledRun_ = nullptr;};
      inline bool getReadyForScheduledRun() const { DARABONBA_PTR_GET_DEFAULT(readyForScheduledRun_, false) };
      inline Data& setReadyForScheduledRun(bool readyForScheduledRun) { DARABONBA_PTR_SET_VALUE(readyForScheduledRun_, readyForScheduledRun) };


    protected:
      // The reason for the automatic pause.
      shared_ptr<string> autoPauseReason_ {};
      // The summary of check items.
      shared_ptr<Data::Checks> checks_ {};
      // Indicates whether the task is ready.
      shared_ptr<bool> ready_ {};
      // Indicates whether the task is ready for a manual run.
      shared_ptr<bool> readyForManualRun_ {};
      // Indicates whether the task is ready for a scheduled run.
      shared_ptr<bool> readyForScheduledRun_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetContextDatabaseSyncJobReadinessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetContextDatabaseSyncJobReadinessResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetContextDatabaseSyncJobReadinessResponseBody::Data) };
    inline GetContextDatabaseSyncJobReadinessResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetContextDatabaseSyncJobReadinessResponseBody::Data) };
    inline GetContextDatabaseSyncJobReadinessResponseBody& setData(const GetContextDatabaseSyncJobReadinessResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetContextDatabaseSyncJobReadinessResponseBody& setData(GetContextDatabaseSyncJobReadinessResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetContextDatabaseSyncJobReadinessResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContextDatabaseSyncJobReadinessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextDatabaseSyncJobReadinessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetContextDatabaseSyncJobReadinessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetContextDatabaseSyncJobReadinessResponseBody::Data> data_ {};
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
