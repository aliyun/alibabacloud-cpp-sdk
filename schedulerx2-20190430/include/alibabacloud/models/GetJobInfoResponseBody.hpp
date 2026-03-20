// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJobInfoResponseBody() = default ;
    GetJobInfoResponseBody(const GetJobInfoResponseBody &) = default ;
    GetJobInfoResponseBody(GetJobInfoResponseBody &&) = default ;
    GetJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBody() = default ;
    GetJobInfoResponseBody& operator=(const GetJobInfoResponseBody &) = default ;
    GetJobInfoResponseBody& operator=(GetJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JobConfigInfo, jobConfigInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JobConfigInfo, jobConfigInfo_);
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
      class JobConfigInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobConfigInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
          DARABONBA_PTR_TO_JSON(ClassName, className_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_TO_JSON(JarUrl, jarUrl_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobMonitorInfo, jobMonitorInfo_);
          DARABONBA_PTR_TO_JSON(JobType, jobType_);
          DARABONBA_PTR_TO_JSON(MapTaskXAttrs, mapTaskXAttrs_);
          DARABONBA_PTR_TO_JSON(MaxAttempt, maxAttempt_);
          DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeConfig, timeConfig_);
          DARABONBA_PTR_TO_JSON(XAttrs, XAttrs_);
        };
        friend void from_json(const Darabonba::Json& j, JobConfigInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
          DARABONBA_PTR_FROM_JSON(ClassName, className_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_FROM_JSON(JarUrl, jarUrl_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobMonitorInfo, jobMonitorInfo_);
          DARABONBA_PTR_FROM_JSON(JobType, jobType_);
          DARABONBA_PTR_FROM_JSON(MapTaskXAttrs, mapTaskXAttrs_);
          DARABONBA_PTR_FROM_JSON(MaxAttempt, maxAttempt_);
          DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeConfig, timeConfig_);
          DARABONBA_PTR_FROM_JSON(XAttrs, XAttrs_);
        };
        JobConfigInfo() = default ;
        JobConfigInfo(const JobConfigInfo &) = default ;
        JobConfigInfo(JobConfigInfo &&) = default ;
        JobConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobConfigInfo() = default ;
        JobConfigInfo& operator=(const JobConfigInfo &) = default ;
        JobConfigInfo& operator=(JobConfigInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TimeConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TimeConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Calendar, calendar_);
            DARABONBA_PTR_TO_JSON(DataOffset, dataOffset_);
            DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
            DARABONBA_PTR_TO_JSON(TimeType, timeType_);
          };
          friend void from_json(const Darabonba::Json& j, TimeConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
            DARABONBA_PTR_FROM_JSON(DataOffset, dataOffset_);
            DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
            DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
          };
          TimeConfig() = default ;
          TimeConfig(const TimeConfig &) = default ;
          TimeConfig(TimeConfig &&) = default ;
          TimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TimeConfig() = default ;
          TimeConfig& operator=(const TimeConfig &) = default ;
          TimeConfig& operator=(TimeConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->calendar_ == nullptr
        && this->dataOffset_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr; };
          // calendar Field Functions 
          bool hasCalendar() const { return this->calendar_ != nullptr;};
          void deleteCalendar() { this->calendar_ = nullptr;};
          inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
          inline TimeConfig& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


          // dataOffset Field Functions 
          bool hasDataOffset() const { return this->dataOffset_ != nullptr;};
          void deleteDataOffset() { this->dataOffset_ = nullptr;};
          inline int32_t getDataOffset() const { DARABONBA_PTR_GET_DEFAULT(dataOffset_, 0) };
          inline TimeConfig& setDataOffset(int32_t dataOffset) { DARABONBA_PTR_SET_VALUE(dataOffset_, dataOffset) };


          // timeExpression Field Functions 
          bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
          void deleteTimeExpression() { this->timeExpression_ = nullptr;};
          inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
          inline TimeConfig& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


          // timeType Field Functions 
          bool hasTimeType() const { return this->timeType_ != nullptr;};
          void deleteTimeType() { this->timeType_ = nullptr;};
          inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
          inline TimeConfig& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


        protected:
          // Custom calendar days specified if TimeType is set to **1** (cron).
          shared_ptr<string> calendar_ {};
          // The time offset specified if TimeType is set to **1** (cron). Unit: seconds.
          shared_ptr<int32_t> dataOffset_ {};
          // The time expression specified based on the value of TimeType:
          // 
          // *   If TimeType is set to **100** (api), no time expression is required.
          // *   If TimeType is set to **3** (fix_rate), this parameter value indicates the specific and fixed frequency. For example, if the value is 30, the system triggers a job every 30 seconds.
          // *   If TimeType is set to **1** (cron), this parameter value indicates the standard CRON expression used to specify the time when to schedule the job.
          // *   If TimeType is set to **4** (second_delay), this parameter value indicates the fixed delay after which the job is triggered. Valid values: 1 to 60. Unit: seconds.
          shared_ptr<string> timeExpression_ {};
          // The time type. Valid values:
          // 
          // *   **1**: cron
          // *   **3**: fix_rate
          // *   **4**: second_delay
          // *   **5**: one_time
          // *   **100**: api
          shared_ptr<int32_t> timeType_ {};
        };

        class MapTaskXAttrs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MapTaskXAttrs& obj) { 
            DARABONBA_PTR_TO_JSON(ConsumerSize, consumerSize_);
            DARABONBA_PTR_TO_JSON(DispatcherSize, dispatcherSize_);
            DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
            DARABONBA_PTR_TO_JSON(QueueSize, queueSize_);
            DARABONBA_PTR_TO_JSON(TaskAttemptInterval, taskAttemptInterval_);
            DARABONBA_PTR_TO_JSON(TaskMaxAttempt, taskMaxAttempt_);
          };
          friend void from_json(const Darabonba::Json& j, MapTaskXAttrs& obj) { 
            DARABONBA_PTR_FROM_JSON(ConsumerSize, consumerSize_);
            DARABONBA_PTR_FROM_JSON(DispatcherSize, dispatcherSize_);
            DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
            DARABONBA_PTR_FROM_JSON(QueueSize, queueSize_);
            DARABONBA_PTR_FROM_JSON(TaskAttemptInterval, taskAttemptInterval_);
            DARABONBA_PTR_FROM_JSON(TaskMaxAttempt, taskMaxAttempt_);
          };
          MapTaskXAttrs() = default ;
          MapTaskXAttrs(const MapTaskXAttrs &) = default ;
          MapTaskXAttrs(MapTaskXAttrs &&) = default ;
          MapTaskXAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MapTaskXAttrs() = default ;
          MapTaskXAttrs& operator=(const MapTaskXAttrs &) = default ;
          MapTaskXAttrs& operator=(MapTaskXAttrs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->consumerSize_ == nullptr
        && this->dispatcherSize_ == nullptr && this->pageSize_ == nullptr && this->queueSize_ == nullptr && this->taskAttemptInterval_ == nullptr && this->taskMaxAttempt_ == nullptr; };
          // consumerSize Field Functions 
          bool hasConsumerSize() const { return this->consumerSize_ != nullptr;};
          void deleteConsumerSize() { this->consumerSize_ = nullptr;};
          inline int32_t getConsumerSize() const { DARABONBA_PTR_GET_DEFAULT(consumerSize_, 0) };
          inline MapTaskXAttrs& setConsumerSize(int32_t consumerSize) { DARABONBA_PTR_SET_VALUE(consumerSize_, consumerSize) };


          // dispatcherSize Field Functions 
          bool hasDispatcherSize() const { return this->dispatcherSize_ != nullptr;};
          void deleteDispatcherSize() { this->dispatcherSize_ = nullptr;};
          inline int32_t getDispatcherSize() const { DARABONBA_PTR_GET_DEFAULT(dispatcherSize_, 0) };
          inline MapTaskXAttrs& setDispatcherSize(int32_t dispatcherSize) { DARABONBA_PTR_SET_VALUE(dispatcherSize_, dispatcherSize) };


          // pageSize Field Functions 
          bool hasPageSize() const { return this->pageSize_ != nullptr;};
          void deletePageSize() { this->pageSize_ = nullptr;};
          inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
          inline MapTaskXAttrs& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


          // queueSize Field Functions 
          bool hasQueueSize() const { return this->queueSize_ != nullptr;};
          void deleteQueueSize() { this->queueSize_ = nullptr;};
          inline int32_t getQueueSize() const { DARABONBA_PTR_GET_DEFAULT(queueSize_, 0) };
          inline MapTaskXAttrs& setQueueSize(int32_t queueSize) { DARABONBA_PTR_SET_VALUE(queueSize_, queueSize) };


          // taskAttemptInterval Field Functions 
          bool hasTaskAttemptInterval() const { return this->taskAttemptInterval_ != nullptr;};
          void deleteTaskAttemptInterval() { this->taskAttemptInterval_ = nullptr;};
          inline int32_t getTaskAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(taskAttemptInterval_, 0) };
          inline MapTaskXAttrs& setTaskAttemptInterval(int32_t taskAttemptInterval) { DARABONBA_PTR_SET_VALUE(taskAttemptInterval_, taskAttemptInterval) };


          // taskMaxAttempt Field Functions 
          bool hasTaskMaxAttempt() const { return this->taskMaxAttempt_ != nullptr;};
          void deleteTaskMaxAttempt() { this->taskMaxAttempt_ = nullptr;};
          inline int32_t getTaskMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(taskMaxAttempt_, 0) };
          inline MapTaskXAttrs& setTaskMaxAttempt(int32_t taskMaxAttempt) { DARABONBA_PTR_SET_VALUE(taskMaxAttempt_, taskMaxAttempt) };


        protected:
          // The number of threads that were triggered by a single worker at a time. Default value: 5.
          shared_ptr<int32_t> consumerSize_ {};
          // The number of task distribution threads. Default value: 5.
          shared_ptr<int32_t> dispatcherSize_ {};
          // The number of tasks that were pulled by a parallel job at a time. Default value: 100.
          shared_ptr<int32_t> pageSize_ {};
          // The maximum number of tasks that can be queued. Default value: 10000.
          shared_ptr<int32_t> queueSize_ {};
          // The interval at which the system retried to run the task after a task failure.
          shared_ptr<int32_t> taskAttemptInterval_ {};
          // The number of retries after a task failure.
          shared_ptr<int32_t> taskMaxAttempt_ {};
        };

        class JobMonitorInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const JobMonitorInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ContactInfo, contactInfo_);
            DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
          };
          friend void from_json(const Darabonba::Json& j, JobMonitorInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactInfo, contactInfo_);
            DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
          };
          JobMonitorInfo() = default ;
          JobMonitorInfo(const JobMonitorInfo &) = default ;
          JobMonitorInfo(JobMonitorInfo &&) = default ;
          JobMonitorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~JobMonitorInfo() = default ;
          JobMonitorInfo& operator=(const JobMonitorInfo &) = default ;
          JobMonitorInfo& operator=(JobMonitorInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MonitorConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MonitorConfig& obj) { 
              DARABONBA_PTR_TO_JSON(FailEnable, failEnable_);
              DARABONBA_PTR_TO_JSON(MissWorkerEnable, missWorkerEnable_);
              DARABONBA_PTR_TO_JSON(SendChannel, sendChannel_);
              DARABONBA_PTR_TO_JSON(Timeout, timeout_);
              DARABONBA_PTR_TO_JSON(TimeoutEnable, timeoutEnable_);
              DARABONBA_PTR_TO_JSON(TimeoutKillEnable, timeoutKillEnable_);
            };
            friend void from_json(const Darabonba::Json& j, MonitorConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(FailEnable, failEnable_);
              DARABONBA_PTR_FROM_JSON(MissWorkerEnable, missWorkerEnable_);
              DARABONBA_PTR_FROM_JSON(SendChannel, sendChannel_);
              DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
              DARABONBA_PTR_FROM_JSON(TimeoutEnable, timeoutEnable_);
              DARABONBA_PTR_FROM_JSON(TimeoutKillEnable, timeoutKillEnable_);
            };
            MonitorConfig() = default ;
            MonitorConfig(const MonitorConfig &) = default ;
            MonitorConfig(MonitorConfig &&) = default ;
            MonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MonitorConfig() = default ;
            MonitorConfig& operator=(const MonitorConfig &) = default ;
            MonitorConfig& operator=(MonitorConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failEnable_ == nullptr
        && this->missWorkerEnable_ == nullptr && this->sendChannel_ == nullptr && this->timeout_ == nullptr && this->timeoutEnable_ == nullptr && this->timeoutKillEnable_ == nullptr; };
            // failEnable Field Functions 
            bool hasFailEnable() const { return this->failEnable_ != nullptr;};
            void deleteFailEnable() { this->failEnable_ = nullptr;};
            inline bool getFailEnable() const { DARABONBA_PTR_GET_DEFAULT(failEnable_, false) };
            inline MonitorConfig& setFailEnable(bool failEnable) { DARABONBA_PTR_SET_VALUE(failEnable_, failEnable) };


            // missWorkerEnable Field Functions 
            bool hasMissWorkerEnable() const { return this->missWorkerEnable_ != nullptr;};
            void deleteMissWorkerEnable() { this->missWorkerEnable_ = nullptr;};
            inline bool getMissWorkerEnable() const { DARABONBA_PTR_GET_DEFAULT(missWorkerEnable_, false) };
            inline MonitorConfig& setMissWorkerEnable(bool missWorkerEnable) { DARABONBA_PTR_SET_VALUE(missWorkerEnable_, missWorkerEnable) };


            // sendChannel Field Functions 
            bool hasSendChannel() const { return this->sendChannel_ != nullptr;};
            void deleteSendChannel() { this->sendChannel_ = nullptr;};
            inline string getSendChannel() const { DARABONBA_PTR_GET_DEFAULT(sendChannel_, "") };
            inline MonitorConfig& setSendChannel(string sendChannel) { DARABONBA_PTR_SET_VALUE(sendChannel_, sendChannel) };


            // timeout Field Functions 
            bool hasTimeout() const { return this->timeout_ != nullptr;};
            void deleteTimeout() { this->timeout_ = nullptr;};
            inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
            inline MonitorConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


            // timeoutEnable Field Functions 
            bool hasTimeoutEnable() const { return this->timeoutEnable_ != nullptr;};
            void deleteTimeoutEnable() { this->timeoutEnable_ = nullptr;};
            inline bool getTimeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutEnable_, false) };
            inline MonitorConfig& setTimeoutEnable(bool timeoutEnable) { DARABONBA_PTR_SET_VALUE(timeoutEnable_, timeoutEnable) };


            // timeoutKillEnable Field Functions 
            bool hasTimeoutKillEnable() const { return this->timeoutKillEnable_ != nullptr;};
            void deleteTimeoutKillEnable() { this->timeoutKillEnable_ = nullptr;};
            inline bool getTimeoutKillEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutKillEnable_, false) };
            inline MonitorConfig& setTimeoutKillEnable(bool timeoutKillEnable) { DARABONBA_PTR_SET_VALUE(timeoutKillEnable_, timeoutKillEnable) };


          protected:
            // Indicates whether the Failure alarm switch was turned on. Valid values:
            // 
            // *   **true**
            // *   **false**
            shared_ptr<bool> failEnable_ {};
            // Indicates whether the No machine alarm available switch was turned on.
            shared_ptr<bool> missWorkerEnable_ {};
            // The method used to send alerts. Only Short Message Service (SMS) is supported.
            shared_ptr<string> sendChannel_ {};
            // The timeout threshold. Default value: 7200. Unit: seconds.
            shared_ptr<int64_t> timeout_ {};
            // Indicates whether the Timeout alarm switch was turned on. Valid values:
            // 
            // *   **true**
            // *   **false**
            shared_ptr<bool> timeoutEnable_ {};
            // Indicates whether the Timeout termination switch was turned on. The switch is turned off by default.
            shared_ptr<bool> timeoutKillEnable_ {};
          };

          class ContactInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ContactInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Ding, ding_);
              DARABONBA_PTR_TO_JSON(UserMail, userMail_);
              DARABONBA_PTR_TO_JSON(UserName, userName_);
              DARABONBA_PTR_TO_JSON(UserPhone, userPhone_);
            };
            friend void from_json(const Darabonba::Json& j, ContactInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Ding, ding_);
              DARABONBA_PTR_FROM_JSON(UserMail, userMail_);
              DARABONBA_PTR_FROM_JSON(UserName, userName_);
              DARABONBA_PTR_FROM_JSON(UserPhone, userPhone_);
            };
            ContactInfo() = default ;
            ContactInfo(const ContactInfo &) = default ;
            ContactInfo(ContactInfo &&) = default ;
            ContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ContactInfo() = default ;
            ContactInfo& operator=(const ContactInfo &) = default ;
            ContactInfo& operator=(ContactInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ding_ == nullptr
        && this->userMail_ == nullptr && this->userName_ == nullptr && this->userPhone_ == nullptr; };
            // ding Field Functions 
            bool hasDing() const { return this->ding_ != nullptr;};
            void deleteDing() { this->ding_ = nullptr;};
            inline string getDing() const { DARABONBA_PTR_GET_DEFAULT(ding_, "") };
            inline ContactInfo& setDing(string ding) { DARABONBA_PTR_SET_VALUE(ding_, ding) };


            // userMail Field Functions 
            bool hasUserMail() const { return this->userMail_ != nullptr;};
            void deleteUserMail() { this->userMail_ = nullptr;};
            inline string getUserMail() const { DARABONBA_PTR_GET_DEFAULT(userMail_, "") };
            inline ContactInfo& setUserMail(string userMail) { DARABONBA_PTR_SET_VALUE(userMail_, userMail) };


            // userName Field Functions 
            bool hasUserName() const { return this->userName_ != nullptr;};
            void deleteUserName() { this->userName_ = nullptr;};
            inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
            inline ContactInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


            // userPhone Field Functions 
            bool hasUserPhone() const { return this->userPhone_ != nullptr;};
            void deleteUserPhone() { this->userPhone_ = nullptr;};
            inline string getUserPhone() const { DARABONBA_PTR_GET_DEFAULT(userPhone_, "") };
            inline ContactInfo& setUserPhone(string userPhone) { DARABONBA_PTR_SET_VALUE(userPhone_, userPhone) };


          protected:
            // The webhook URL of the DingTalk chatbot.
            shared_ptr<string> ding_ {};
            // The email address of the alert contact.
            shared_ptr<string> userMail_ {};
            // The name of the alert contact.
            shared_ptr<string> userName_ {};
            // The mobile phone number of the alert contact.
            shared_ptr<string> userPhone_ {};
          };

          virtual bool empty() const override { return this->contactInfo_ == nullptr
        && this->monitorConfig_ == nullptr; };
          // contactInfo Field Functions 
          bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
          void deleteContactInfo() { this->contactInfo_ = nullptr;};
          inline const vector<JobMonitorInfo::ContactInfo> & getContactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, vector<JobMonitorInfo::ContactInfo>) };
          inline vector<JobMonitorInfo::ContactInfo> getContactInfo() { DARABONBA_PTR_GET(contactInfo_, vector<JobMonitorInfo::ContactInfo>) };
          inline JobMonitorInfo& setContactInfo(const vector<JobMonitorInfo::ContactInfo> & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
          inline JobMonitorInfo& setContactInfo(vector<JobMonitorInfo::ContactInfo> && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


          // monitorConfig Field Functions 
          bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
          void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
          inline const JobMonitorInfo::MonitorConfig & getMonitorConfig() const { DARABONBA_PTR_GET_CONST(monitorConfig_, JobMonitorInfo::MonitorConfig) };
          inline JobMonitorInfo::MonitorConfig getMonitorConfig() { DARABONBA_PTR_GET(monitorConfig_, JobMonitorInfo::MonitorConfig) };
          inline JobMonitorInfo& setMonitorConfig(const JobMonitorInfo::MonitorConfig & monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };
          inline JobMonitorInfo& setMonitorConfig(JobMonitorInfo::MonitorConfig && monitorConfig) { DARABONBA_PTR_SET_RVALUE(monitorConfig_, monitorConfig) };


        protected:
          // The alert contact Information.
          shared_ptr<vector<JobMonitorInfo::ContactInfo>> contactInfo_ {};
          // The configurations of the alerting features and the alert thresholds.
          shared_ptr<JobMonitorInfo::MonitorConfig> monitorConfig_ {};
        };

        virtual bool empty() const override { return this->attemptInterval_ == nullptr
        && this->className_ == nullptr && this->content_ == nullptr && this->description_ == nullptr && this->executeMode_ == nullptr && this->jarUrl_ == nullptr
        && this->jobId_ == nullptr && this->jobMonitorInfo_ == nullptr && this->jobType_ == nullptr && this->mapTaskXAttrs_ == nullptr && this->maxAttempt_ == nullptr
        && this->maxConcurrency_ == nullptr && this->name_ == nullptr && this->parameters_ == nullptr && this->status_ == nullptr && this->timeConfig_ == nullptr
        && this->XAttrs_ == nullptr; };
        // attemptInterval Field Functions 
        bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
        void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
        inline int32_t getAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
        inline JobConfigInfo& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


        // className Field Functions 
        bool hasClassName() const { return this->className_ != nullptr;};
        void deleteClassName() { this->className_ = nullptr;};
        inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
        inline JobConfigInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline JobConfigInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline JobConfigInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // executeMode Field Functions 
        bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
        void deleteExecuteMode() { this->executeMode_ = nullptr;};
        inline string getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, "") };
        inline JobConfigInfo& setExecuteMode(string executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


        // jarUrl Field Functions 
        bool hasJarUrl() const { return this->jarUrl_ != nullptr;};
        void deleteJarUrl() { this->jarUrl_ = nullptr;};
        inline string getJarUrl() const { DARABONBA_PTR_GET_DEFAULT(jarUrl_, "") };
        inline JobConfigInfo& setJarUrl(string jarUrl) { DARABONBA_PTR_SET_VALUE(jarUrl_, jarUrl) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
        inline JobConfigInfo& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobMonitorInfo Field Functions 
        bool hasJobMonitorInfo() const { return this->jobMonitorInfo_ != nullptr;};
        void deleteJobMonitorInfo() { this->jobMonitorInfo_ = nullptr;};
        inline const JobConfigInfo::JobMonitorInfo & getJobMonitorInfo() const { DARABONBA_PTR_GET_CONST(jobMonitorInfo_, JobConfigInfo::JobMonitorInfo) };
        inline JobConfigInfo::JobMonitorInfo getJobMonitorInfo() { DARABONBA_PTR_GET(jobMonitorInfo_, JobConfigInfo::JobMonitorInfo) };
        inline JobConfigInfo& setJobMonitorInfo(const JobConfigInfo::JobMonitorInfo & jobMonitorInfo) { DARABONBA_PTR_SET_VALUE(jobMonitorInfo_, jobMonitorInfo) };
        inline JobConfigInfo& setJobMonitorInfo(JobConfigInfo::JobMonitorInfo && jobMonitorInfo) { DARABONBA_PTR_SET_RVALUE(jobMonitorInfo_, jobMonitorInfo) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline JobConfigInfo& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // mapTaskXAttrs Field Functions 
        bool hasMapTaskXAttrs() const { return this->mapTaskXAttrs_ != nullptr;};
        void deleteMapTaskXAttrs() { this->mapTaskXAttrs_ = nullptr;};
        inline const JobConfigInfo::MapTaskXAttrs & getMapTaskXAttrs() const { DARABONBA_PTR_GET_CONST(mapTaskXAttrs_, JobConfigInfo::MapTaskXAttrs) };
        inline JobConfigInfo::MapTaskXAttrs getMapTaskXAttrs() { DARABONBA_PTR_GET(mapTaskXAttrs_, JobConfigInfo::MapTaskXAttrs) };
        inline JobConfigInfo& setMapTaskXAttrs(const JobConfigInfo::MapTaskXAttrs & mapTaskXAttrs) { DARABONBA_PTR_SET_VALUE(mapTaskXAttrs_, mapTaskXAttrs) };
        inline JobConfigInfo& setMapTaskXAttrs(JobConfigInfo::MapTaskXAttrs && mapTaskXAttrs) { DARABONBA_PTR_SET_RVALUE(mapTaskXAttrs_, mapTaskXAttrs) };


        // maxAttempt Field Functions 
        bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
        void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
        inline int32_t getMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
        inline JobConfigInfo& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


        // maxConcurrency Field Functions 
        bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
        void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
        inline string getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, "") };
        inline JobConfigInfo& setMaxConcurrency(string maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline JobConfigInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline JobConfigInfo& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline JobConfigInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeConfig Field Functions 
        bool hasTimeConfig() const { return this->timeConfig_ != nullptr;};
        void deleteTimeConfig() { this->timeConfig_ = nullptr;};
        inline const JobConfigInfo::TimeConfig & getTimeConfig() const { DARABONBA_PTR_GET_CONST(timeConfig_, JobConfigInfo::TimeConfig) };
        inline JobConfigInfo::TimeConfig getTimeConfig() { DARABONBA_PTR_GET(timeConfig_, JobConfigInfo::TimeConfig) };
        inline JobConfigInfo& setTimeConfig(const JobConfigInfo::TimeConfig & timeConfig) { DARABONBA_PTR_SET_VALUE(timeConfig_, timeConfig) };
        inline JobConfigInfo& setTimeConfig(JobConfigInfo::TimeConfig && timeConfig) { DARABONBA_PTR_SET_RVALUE(timeConfig_, timeConfig) };


        // XAttrs Field Functions 
        bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
        void deleteXAttrs() { this->XAttrs_ = nullptr;};
        inline string getXAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
        inline JobConfigInfo& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


      protected:
        // The interval at which the system retried to run the job after a job failure. Default value: 30. Unit: seconds.
        shared_ptr<int32_t> attemptInterval_ {};
        // The full path of the job interface class. This parameter is returned only for jobs whose job type is Java.
        shared_ptr<string> className_ {};
        // The script of a script job.
        shared_ptr<string> content_ {};
        // The description of the job.
        shared_ptr<string> description_ {};
        // The execution mode of the job. Valid values:
        // 
        // *   **Stand-alone operation**: standalone
        // *   **Broadcast run**: broadcast
        // *   **Visual MapReduce**: parallel
        // *   **MapReduce**: batch
        // *   **Shard run**: sharding
        shared_ptr<string> executeMode_ {};
        // The full path used to upload files to Object Storage Service (OSS).
        // 
        // If you use a JAR package, you can upload the JAR package to this OSS path.
        shared_ptr<string> jarUrl_ {};
        // The job ID.
        shared_ptr<int64_t> jobId_ {};
        // The monitoring information of the job.
        shared_ptr<JobConfigInfo::JobMonitorInfo> jobMonitorInfo_ {};
        // The job type.
        shared_ptr<string> jobType_ {};
        // The advanced configurations of the job.
        shared_ptr<JobConfigInfo::MapTaskXAttrs> mapTaskXAttrs_ {};
        // The maximum number of retries after a job failure. This parameter was specified based on your business requirements. Default value: 0.
        shared_ptr<int32_t> maxAttempt_ {};
        // The maximum number of concurrent instances. Default value: 1. The default value indicates that if the last triggered instance is running, the next instance is not triggered even if the scheduled point in time for running the next instance is reached.
        shared_ptr<string> maxConcurrency_ {};
        // The job name.
        shared_ptr<string> name_ {};
        // The user-defined parameters that you can obtain when the job is running.
        shared_ptr<string> parameters_ {};
        // Indicates whether the job was enabled. Valid values:
        // 
        // *   **1**: The job was enabled and could be triggered.
        // *   **0**: The job was disabled and could not be triggered.
        shared_ptr<int32_t> status_ {};
        // The time configurations.
        shared_ptr<JobConfigInfo::TimeConfig> timeConfig_ {};
        // The extended fields.
        shared_ptr<string> XAttrs_ {};
      };

      virtual bool empty() const override { return this->jobConfigInfo_ == nullptr; };
      // jobConfigInfo Field Functions 
      bool hasJobConfigInfo() const { return this->jobConfigInfo_ != nullptr;};
      void deleteJobConfigInfo() { this->jobConfigInfo_ = nullptr;};
      inline const Data::JobConfigInfo & getJobConfigInfo() const { DARABONBA_PTR_GET_CONST(jobConfigInfo_, Data::JobConfigInfo) };
      inline Data::JobConfigInfo getJobConfigInfo() { DARABONBA_PTR_GET(jobConfigInfo_, Data::JobConfigInfo) };
      inline Data& setJobConfigInfo(const Data::JobConfigInfo & jobConfigInfo) { DARABONBA_PTR_SET_VALUE(jobConfigInfo_, jobConfigInfo) };
      inline Data& setJobConfigInfo(Data::JobConfigInfo && jobConfigInfo) { DARABONBA_PTR_SET_RVALUE(jobConfigInfo_, jobConfigInfo) };


    protected:
      // The configurations of the job.
      shared_ptr<Data::JobConfigInfo> jobConfigInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetJobInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetJobInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetJobInfoResponseBody::Data) };
    inline GetJobInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetJobInfoResponseBody::Data) };
    inline GetJobInfoResponseBody& setData(const GetJobInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetJobInfoResponseBody& setData(GetJobInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJobInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJobInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The details of the job.
    shared_ptr<GetJobInfoResponseBody::Data> data_ {};
    // The error message returned only if an error occurs.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the job details were obtained. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
