// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWCRONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWCRONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawCronJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawCronJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawCronJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePolarClawCronJobResponseBody() = default ;
    UpdatePolarClawCronJobResponseBody(const UpdatePolarClawCronJobResponseBody &) = default ;
    UpdatePolarClawCronJobResponseBody(UpdatePolarClawCronJobResponseBody &&) = default ;
    UpdatePolarClawCronJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawCronJobResponseBody() = default ;
    UpdatePolarClawCronJobResponseBody& operator=(const UpdatePolarClawCronJobResponseBody &) = default ;
    UpdatePolarClawCronJobResponseBody& operator=(UpdatePolarClawCronJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_TO_JSON(DeleteAfterRun, deleteAfterRun_);
        DARABONBA_PTR_TO_JSON(Delivery, delivery_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Payload, payload_);
        DARABONBA_PTR_TO_JSON(Runs, runs_);
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
        DARABONBA_PTR_TO_JSON(SessionKey, sessionKey_);
        DARABONBA_PTR_TO_JSON(SessionTarget, sessionTarget_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UpdatedAtMs, updatedAtMs_);
        DARABONBA_PTR_TO_JSON(WakeMode, wakeMode_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_FROM_JSON(DeleteAfterRun, deleteAfterRun_);
        DARABONBA_PTR_FROM_JSON(Delivery, delivery_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Payload, payload_);
        DARABONBA_PTR_FROM_JSON(Runs, runs_);
        DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
        DARABONBA_PTR_FROM_JSON(SessionKey, sessionKey_);
        DARABONBA_PTR_FROM_JSON(SessionTarget, sessionTarget_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UpdatedAtMs, updatedAtMs_);
        DARABONBA_PTR_FROM_JSON(WakeMode, wakeMode_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class State : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const State& obj) { 
          DARABONBA_PTR_TO_JSON(ConsecutiveErrors, consecutiveErrors_);
          DARABONBA_PTR_TO_JSON(LastRunAtMs, lastRunAtMs_);
          DARABONBA_PTR_TO_JSON(LastRunStatus, lastRunStatus_);
          DARABONBA_PTR_TO_JSON(NextRunAtMs, nextRunAtMs_);
        };
        friend void from_json(const Darabonba::Json& j, State& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsecutiveErrors, consecutiveErrors_);
          DARABONBA_PTR_FROM_JSON(LastRunAtMs, lastRunAtMs_);
          DARABONBA_PTR_FROM_JSON(LastRunStatus, lastRunStatus_);
          DARABONBA_PTR_FROM_JSON(NextRunAtMs, nextRunAtMs_);
        };
        State() = default ;
        State(const State &) = default ;
        State(State &&) = default ;
        State(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~State() = default ;
        State& operator=(const State &) = default ;
        State& operator=(State &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consecutiveErrors_ == nullptr
        && this->lastRunAtMs_ == nullptr && this->lastRunStatus_ == nullptr && this->nextRunAtMs_ == nullptr; };
        // consecutiveErrors Field Functions 
        bool hasConsecutiveErrors() const { return this->consecutiveErrors_ != nullptr;};
        void deleteConsecutiveErrors() { this->consecutiveErrors_ = nullptr;};
        inline int32_t getConsecutiveErrors() const { DARABONBA_PTR_GET_DEFAULT(consecutiveErrors_, 0) };
        inline State& setConsecutiveErrors(int32_t consecutiveErrors) { DARABONBA_PTR_SET_VALUE(consecutiveErrors_, consecutiveErrors) };


        // lastRunAtMs Field Functions 
        bool hasLastRunAtMs() const { return this->lastRunAtMs_ != nullptr;};
        void deleteLastRunAtMs() { this->lastRunAtMs_ = nullptr;};
        inline int64_t getLastRunAtMs() const { DARABONBA_PTR_GET_DEFAULT(lastRunAtMs_, 0L) };
        inline State& setLastRunAtMs(int64_t lastRunAtMs) { DARABONBA_PTR_SET_VALUE(lastRunAtMs_, lastRunAtMs) };


        // lastRunStatus Field Functions 
        bool hasLastRunStatus() const { return this->lastRunStatus_ != nullptr;};
        void deleteLastRunStatus() { this->lastRunStatus_ = nullptr;};
        inline string getLastRunStatus() const { DARABONBA_PTR_GET_DEFAULT(lastRunStatus_, "") };
        inline State& setLastRunStatus(string lastRunStatus) { DARABONBA_PTR_SET_VALUE(lastRunStatus_, lastRunStatus) };


        // nextRunAtMs Field Functions 
        bool hasNextRunAtMs() const { return this->nextRunAtMs_ != nullptr;};
        void deleteNextRunAtMs() { this->nextRunAtMs_ = nullptr;};
        inline int64_t getNextRunAtMs() const { DARABONBA_PTR_GET_DEFAULT(nextRunAtMs_, 0L) };
        inline State& setNextRunAtMs(int64_t nextRunAtMs) { DARABONBA_PTR_SET_VALUE(nextRunAtMs_, nextRunAtMs) };


      protected:
        // **The number of consecutive failures.**
        shared_ptr<int32_t> consecutiveErrors_ {};
        // **The optional timestamp of the last run, in milliseconds.**
        shared_ptr<int64_t> lastRunAtMs_ {};
        // **The optional status of the last run.**
        shared_ptr<string> lastRunStatus_ {};
        // **The timestamp for the next run, in milliseconds.**
        shared_ptr<int64_t> nextRunAtMs_ {};
      };

      class Schedule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
          DARABONBA_PTR_TO_JSON(AnchorMs, anchorMs_);
          DARABONBA_PTR_TO_JSON(At, at_);
          DARABONBA_PTR_TO_JSON(EveryMs, everyMs_);
          DARABONBA_PTR_TO_JSON(Expr, expr_);
          DARABONBA_PTR_TO_JSON(Kind, kind_);
          DARABONBA_PTR_TO_JSON(Tz, tz_);
        };
        friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
          DARABONBA_PTR_FROM_JSON(AnchorMs, anchorMs_);
          DARABONBA_PTR_FROM_JSON(At, at_);
          DARABONBA_PTR_FROM_JSON(EveryMs, everyMs_);
          DARABONBA_PTR_FROM_JSON(Expr, expr_);
          DARABONBA_PTR_FROM_JSON(Kind, kind_);
          DARABONBA_PTR_FROM_JSON(Tz, tz_);
        };
        Schedule() = default ;
        Schedule(const Schedule &) = default ;
        Schedule(Schedule &&) = default ;
        Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schedule() = default ;
        Schedule& operator=(const Schedule &) = default ;
        Schedule& operator=(Schedule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->anchorMs_ == nullptr
        && this->at_ == nullptr && this->everyMs_ == nullptr && this->expr_ == nullptr && this->kind_ == nullptr && this->tz_ == nullptr; };
        // anchorMs Field Functions 
        bool hasAnchorMs() const { return this->anchorMs_ != nullptr;};
        void deleteAnchorMs() { this->anchorMs_ = nullptr;};
        inline int64_t getAnchorMs() const { DARABONBA_PTR_GET_DEFAULT(anchorMs_, 0L) };
        inline Schedule& setAnchorMs(int64_t anchorMs) { DARABONBA_PTR_SET_VALUE(anchorMs_, anchorMs) };


        // at Field Functions 
        bool hasAt() const { return this->at_ != nullptr;};
        void deleteAt() { this->at_ = nullptr;};
        inline string getAt() const { DARABONBA_PTR_GET_DEFAULT(at_, "") };
        inline Schedule& setAt(string at) { DARABONBA_PTR_SET_VALUE(at_, at) };


        // everyMs Field Functions 
        bool hasEveryMs() const { return this->everyMs_ != nullptr;};
        void deleteEveryMs() { this->everyMs_ = nullptr;};
        inline int64_t getEveryMs() const { DARABONBA_PTR_GET_DEFAULT(everyMs_, 0L) };
        inline Schedule& setEveryMs(int64_t everyMs) { DARABONBA_PTR_SET_VALUE(everyMs_, everyMs) };


        // expr Field Functions 
        bool hasExpr() const { return this->expr_ != nullptr;};
        void deleteExpr() { this->expr_ = nullptr;};
        inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
        inline Schedule& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


        // kind Field Functions 
        bool hasKind() const { return this->kind_ != nullptr;};
        void deleteKind() { this->kind_ = nullptr;};
        inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
        inline Schedule& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


        // tz Field Functions 
        bool hasTz() const { return this->tz_ != nullptr;};
        void deleteTz() { this->tz_ = nullptr;};
        inline string getTz() const { DARABONBA_PTR_GET_DEFAULT(tz_, "") };
        inline Schedule& setTz(string tz) { DARABONBA_PTR_SET_VALUE(tz_, tz) };


      protected:
        // The base timestamp for interval alignment, in milliseconds.
        shared_ptr<int64_t> anchorMs_ {};
        // The ISO 8601 timestamp. Required if `Kind` is `at`.
        shared_ptr<string> at_ {};
        // The interval in milliseconds. Required if `Kind` is `every`.
        shared_ptr<int64_t> everyMs_ {};
        // The cron expression. Required if `Kind` is `cron`.
        shared_ptr<string> expr_ {};
        // The schedule type. Valid values: `cron` (cron expression), `every` (fixed interval), or `at` (one-time).
        shared_ptr<string> kind_ {};
        // The IANA time zone, such as `Asia/Shanghai`.
        shared_ptr<string> tz_ {};
      };

      class Runs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Runs& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Delivered, delivered_);
          DARABONBA_PTR_TO_JSON(DeliveryStatus, deliveryStatus_);
          DARABONBA_PTR_TO_JSON(DurationMs, durationMs_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(NextRunAtMs, nextRunAtMs_);
          DARABONBA_PTR_TO_JSON(Provider, provider_);
          DARABONBA_PTR_TO_JSON(RunAtMs, runAtMs_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Ts, ts_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, Runs& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Delivered, delivered_);
          DARABONBA_PTR_FROM_JSON(DeliveryStatus, deliveryStatus_);
          DARABONBA_PTR_FROM_JSON(DurationMs, durationMs_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(NextRunAtMs, nextRunAtMs_);
          DARABONBA_PTR_FROM_JSON(Provider, provider_);
          DARABONBA_PTR_FROM_JSON(RunAtMs, runAtMs_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Ts, ts_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
        };
        Runs() = default ;
        Runs(const Runs &) = default ;
        Runs(Runs &&) = default ;
        Runs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Runs() = default ;
        Runs& operator=(const Runs &) = default ;
        Runs& operator=(Runs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Usage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Usage& obj) { 
            DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
            DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
            DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
          };
          friend void from_json(const Darabonba::Json& j, Usage& obj) { 
            DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
            DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
            DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
          };
          Usage() = default ;
          Usage(const Usage &) = default ;
          Usage(Usage &&) = default ;
          Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Usage() = default ;
          Usage& operator=(const Usage &) = default ;
          Usage& operator=(Usage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
          // inputTokens Field Functions 
          bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
          void deleteInputTokens() { this->inputTokens_ = nullptr;};
          inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
          inline Usage& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


          // outputTokens Field Functions 
          bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
          void deleteOutputTokens() { this->outputTokens_ = nullptr;};
          inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
          inline Usage& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


          // totalTokens Field Functions 
          bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
          void deleteTotalTokens() { this->totalTokens_ = nullptr;};
          inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
          inline Usage& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


        protected:
          // The number of input tokens.
          shared_ptr<int32_t> inputTokens_ {};
          // The number of output tokens.
          shared_ptr<int32_t> outputTokens_ {};
          // The total number of tokens.
          shared_ptr<int32_t> totalTokens_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->delivered_ == nullptr && this->deliveryStatus_ == nullptr && this->durationMs_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr
        && this->model_ == nullptr && this->nextRunAtMs_ == nullptr && this->provider_ == nullptr && this->runAtMs_ == nullptr && this->sessionId_ == nullptr
        && this->status_ == nullptr && this->summary_ == nullptr && this->ts_ == nullptr && this->usage_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Runs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // delivered Field Functions 
        bool hasDelivered() const { return this->delivered_ != nullptr;};
        void deleteDelivered() { this->delivered_ = nullptr;};
        inline bool getDelivered() const { DARABONBA_PTR_GET_DEFAULT(delivered_, false) };
        inline Runs& setDelivered(bool delivered) { DARABONBA_PTR_SET_VALUE(delivered_, delivered) };


        // deliveryStatus Field Functions 
        bool hasDeliveryStatus() const { return this->deliveryStatus_ != nullptr;};
        void deleteDeliveryStatus() { this->deliveryStatus_ = nullptr;};
        inline string getDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(deliveryStatus_, "") };
        inline Runs& setDeliveryStatus(string deliveryStatus) { DARABONBA_PTR_SET_VALUE(deliveryStatus_, deliveryStatus) };


        // durationMs Field Functions 
        bool hasDurationMs() const { return this->durationMs_ != nullptr;};
        void deleteDurationMs() { this->durationMs_ = nullptr;};
        inline int64_t getDurationMs() const { DARABONBA_PTR_GET_DEFAULT(durationMs_, 0L) };
        inline Runs& setDurationMs(int64_t durationMs) { DARABONBA_PTR_SET_VALUE(durationMs_, durationMs) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Runs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline Runs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline Runs& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // nextRunAtMs Field Functions 
        bool hasNextRunAtMs() const { return this->nextRunAtMs_ != nullptr;};
        void deleteNextRunAtMs() { this->nextRunAtMs_ = nullptr;};
        inline int64_t getNextRunAtMs() const { DARABONBA_PTR_GET_DEFAULT(nextRunAtMs_, 0L) };
        inline Runs& setNextRunAtMs(int64_t nextRunAtMs) { DARABONBA_PTR_SET_VALUE(nextRunAtMs_, nextRunAtMs) };


        // provider Field Functions 
        bool hasProvider() const { return this->provider_ != nullptr;};
        void deleteProvider() { this->provider_ = nullptr;};
        inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
        inline Runs& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


        // runAtMs Field Functions 
        bool hasRunAtMs() const { return this->runAtMs_ != nullptr;};
        void deleteRunAtMs() { this->runAtMs_ = nullptr;};
        inline int64_t getRunAtMs() const { DARABONBA_PTR_GET_DEFAULT(runAtMs_, 0L) };
        inline Runs& setRunAtMs(int64_t runAtMs) { DARABONBA_PTR_SET_VALUE(runAtMs_, runAtMs) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Runs& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Runs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Runs& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // ts Field Functions 
        bool hasTs() const { return this->ts_ != nullptr;};
        void deleteTs() { this->ts_ = nullptr;};
        inline int64_t getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
        inline Runs& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline const Runs::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Runs::Usage) };
        inline Runs::Usage getUsage() { DARABONBA_PTR_GET(usage_, Runs::Usage) };
        inline Runs& setUsage(const Runs::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
        inline Runs& setUsage(Runs::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


      protected:
        // The action performed. Valid values: `finished`, `error`, or `skipped`.
        shared_ptr<string> action_ {};
        // Indicates whether the result was delivered.
        shared_ptr<bool> delivered_ {};
        // The delivery status.
        shared_ptr<string> deliveryStatus_ {};
        // The execution duration, in milliseconds.
        shared_ptr<int64_t> durationMs_ {};
        // The associated job ID.
        shared_ptr<string> jobId_ {};
        // The job name.
        shared_ptr<string> jobName_ {};
        // The model used for the run.
        shared_ptr<string> model_ {};
        // The timestamp of the next scheduled run, in milliseconds.
        shared_ptr<int64_t> nextRunAtMs_ {};
        // The model provider.
        shared_ptr<string> provider_ {};
        // The actual execution timestamp, in milliseconds.
        shared_ptr<int64_t> runAtMs_ {};
        // The associated session ID.
        shared_ptr<string> sessionId_ {};
        // The status of the run. Valid values: `ok`, `error`, or `skipped`.
        shared_ptr<string> status_ {};
        // The run summary text.
        shared_ptr<string> summary_ {};
        // The run timestamp, in milliseconds.
        shared_ptr<int64_t> ts_ {};
        // Optional token usage details.
        shared_ptr<Runs::Usage> usage_ {};
      };

      class Payload : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Payload& obj) { 
          DARABONBA_PTR_TO_JSON(BestEffortDeliver, bestEffortDeliver_);
          DARABONBA_PTR_TO_JSON(Channel, channel_);
          DARABONBA_PTR_TO_JSON(Deliver, deliver_);
          DARABONBA_PTR_TO_JSON(Kind, kind_);
          DARABONBA_PTR_TO_JSON(LightContext, lightContext_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
          DARABONBA_PTR_TO_JSON(To, to_);
        };
        friend void from_json(const Darabonba::Json& j, Payload& obj) { 
          DARABONBA_PTR_FROM_JSON(BestEffortDeliver, bestEffortDeliver_);
          DARABONBA_PTR_FROM_JSON(Channel, channel_);
          DARABONBA_PTR_FROM_JSON(Deliver, deliver_);
          DARABONBA_PTR_FROM_JSON(Kind, kind_);
          DARABONBA_PTR_FROM_JSON(LightContext, lightContext_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
          DARABONBA_PTR_FROM_JSON(To, to_);
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
        virtual bool empty() const override { return this->bestEffortDeliver_ == nullptr
        && this->channel_ == nullptr && this->deliver_ == nullptr && this->kind_ == nullptr && this->lightContext_ == nullptr && this->message_ == nullptr
        && this->model_ == nullptr && this->text_ == nullptr && this->timeoutSeconds_ == nullptr && this->to_ == nullptr; };
        // bestEffortDeliver Field Functions 
        bool hasBestEffortDeliver() const { return this->bestEffortDeliver_ != nullptr;};
        void deleteBestEffortDeliver() { this->bestEffortDeliver_ = nullptr;};
        inline bool getBestEffortDeliver() const { DARABONBA_PTR_GET_DEFAULT(bestEffortDeliver_, false) };
        inline Payload& setBestEffortDeliver(bool bestEffortDeliver) { DARABONBA_PTR_SET_VALUE(bestEffortDeliver_, bestEffortDeliver) };


        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline Payload& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // deliver Field Functions 
        bool hasDeliver() const { return this->deliver_ != nullptr;};
        void deleteDeliver() { this->deliver_ = nullptr;};
        inline bool getDeliver() const { DARABONBA_PTR_GET_DEFAULT(deliver_, false) };
        inline Payload& setDeliver(bool deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };


        // kind Field Functions 
        bool hasKind() const { return this->kind_ != nullptr;};
        void deleteKind() { this->kind_ = nullptr;};
        inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
        inline Payload& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


        // lightContext Field Functions 
        bool hasLightContext() const { return this->lightContext_ != nullptr;};
        void deleteLightContext() { this->lightContext_ = nullptr;};
        inline bool getLightContext() const { DARABONBA_PTR_GET_DEFAULT(lightContext_, false) };
        inline Payload& setLightContext(bool lightContext) { DARABONBA_PTR_SET_VALUE(lightContext_, lightContext) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Payload& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline Payload& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Payload& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // timeoutSeconds Field Functions 
        bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
        void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
        inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
        inline Payload& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


        // to Field Functions 
        bool hasTo() const { return this->to_ != nullptr;};
        void deleteTo() { this->to_ = nullptr;};
        inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
        inline Payload& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


      protected:
        // Indicates whether to ignore delivery failures.
        shared_ptr<bool> bestEffortDeliver_ {};
        // The optional delivery channel ID.
        shared_ptr<string> channel_ {};
        // Indicates whether to deliver the output to a channel.
        shared_ptr<bool> deliver_ {};
        // The payload type. Valid values: `agentTurn` (Agent conversation) or `systemEvent` (system event).
        shared_ptr<string> kind_ {};
        // Indicates whether to use a lightweight context.
        shared_ptr<bool> lightContext_ {};
        // The Agent conversation prompt.
        shared_ptr<string> message_ {};
        // The model override.
        shared_ptr<string> model_ {};
        // The system event text.
        shared_ptr<string> text_ {};
        // The optional execution timeout in seconds.
        shared_ptr<int32_t> timeoutSeconds_ {};
        // The optional delivery target.
        shared_ptr<string> to_ {};
      };

      class Delivery : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Delivery& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(BestEffort, bestEffort_);
          DARABONBA_PTR_TO_JSON(Channel, channel_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(To, to_);
        };
        friend void from_json(const Darabonba::Json& j, Delivery& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(BestEffort, bestEffort_);
          DARABONBA_PTR_FROM_JSON(Channel, channel_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(To, to_);
        };
        Delivery() = default ;
        Delivery(const Delivery &) = default ;
        Delivery(Delivery &&) = default ;
        Delivery(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Delivery() = default ;
        Delivery& operator=(const Delivery &) = default ;
        Delivery& operator=(Delivery &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->bestEffort_ == nullptr && this->channel_ == nullptr && this->mode_ == nullptr && this->to_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline Delivery& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // bestEffort Field Functions 
        bool hasBestEffort() const { return this->bestEffort_ != nullptr;};
        void deleteBestEffort() { this->bestEffort_ = nullptr;};
        inline bool getBestEffort() const { DARABONBA_PTR_GET_DEFAULT(bestEffort_, false) };
        inline Delivery& setBestEffort(bool bestEffort) { DARABONBA_PTR_SET_VALUE(bestEffort_, bestEffort) };


        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline Delivery& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline Delivery& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // to Field Functions 
        bool hasTo() const { return this->to_ != nullptr;};
        void deleteTo() { this->to_ = nullptr;};
        inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
        inline Delivery& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


      protected:
        // The optional channel account ID.
        shared_ptr<string> accountId_ {};
        // Indicates whether to ignore delivery failures.
        shared_ptr<bool> bestEffort_ {};
        // The delivery channel.
        shared_ptr<string> channel_ {};
        // The delivery mode. Valid values: `none`, `announce`, or `webhook`.
        shared_ptr<string> mode_ {};
        // The delivery target. Required and must be a URL if `Mode` is `webhook`.
        shared_ptr<string> to_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createdAtMs_ == nullptr && this->deleteAfterRun_ == nullptr && this->delivery_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->payload_ == nullptr && this->runs_ == nullptr && this->schedule_ == nullptr
        && this->sessionKey_ == nullptr && this->sessionTarget_ == nullptr && this->state_ == nullptr && this->updatedAtMs_ == nullptr && this->wakeMode_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Job& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // createdAtMs Field Functions 
      bool hasCreatedAtMs() const { return this->createdAtMs_ != nullptr;};
      void deleteCreatedAtMs() { this->createdAtMs_ = nullptr;};
      inline int64_t getCreatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(createdAtMs_, 0L) };
      inline Job& setCreatedAtMs(int64_t createdAtMs) { DARABONBA_PTR_SET_VALUE(createdAtMs_, createdAtMs) };


      // deleteAfterRun Field Functions 
      bool hasDeleteAfterRun() const { return this->deleteAfterRun_ != nullptr;};
      void deleteDeleteAfterRun() { this->deleteAfterRun_ = nullptr;};
      inline bool getDeleteAfterRun() const { DARABONBA_PTR_GET_DEFAULT(deleteAfterRun_, false) };
      inline Job& setDeleteAfterRun(bool deleteAfterRun) { DARABONBA_PTR_SET_VALUE(deleteAfterRun_, deleteAfterRun) };


      // delivery Field Functions 
      bool hasDelivery() const { return this->delivery_ != nullptr;};
      void deleteDelivery() { this->delivery_ = nullptr;};
      inline const Job::Delivery & getDelivery() const { DARABONBA_PTR_GET_CONST(delivery_, Job::Delivery) };
      inline Job::Delivery getDelivery() { DARABONBA_PTR_GET(delivery_, Job::Delivery) };
      inline Job& setDelivery(const Job::Delivery & delivery) { DARABONBA_PTR_SET_VALUE(delivery_, delivery) };
      inline Job& setDelivery(Job::Delivery && delivery) { DARABONBA_PTR_SET_RVALUE(delivery_, delivery) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Job& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Job& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Job& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Job& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline const Job::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, Job::Payload) };
      inline Job::Payload getPayload() { DARABONBA_PTR_GET(payload_, Job::Payload) };
      inline Job& setPayload(const Job::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
      inline Job& setPayload(Job::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


      // runs Field Functions 
      bool hasRuns() const { return this->runs_ != nullptr;};
      void deleteRuns() { this->runs_ = nullptr;};
      inline const vector<Job::Runs> & getRuns() const { DARABONBA_PTR_GET_CONST(runs_, vector<Job::Runs>) };
      inline vector<Job::Runs> getRuns() { DARABONBA_PTR_GET(runs_, vector<Job::Runs>) };
      inline Job& setRuns(const vector<Job::Runs> & runs) { DARABONBA_PTR_SET_VALUE(runs_, runs) };
      inline Job& setRuns(vector<Job::Runs> && runs) { DARABONBA_PTR_SET_RVALUE(runs_, runs) };


      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline const Job::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, Job::Schedule) };
      inline Job::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, Job::Schedule) };
      inline Job& setSchedule(const Job::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
      inline Job& setSchedule(Job::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


      // sessionKey Field Functions 
      bool hasSessionKey() const { return this->sessionKey_ != nullptr;};
      void deleteSessionKey() { this->sessionKey_ = nullptr;};
      inline string getSessionKey() const { DARABONBA_PTR_GET_DEFAULT(sessionKey_, "") };
      inline Job& setSessionKey(string sessionKey) { DARABONBA_PTR_SET_VALUE(sessionKey_, sessionKey) };


      // sessionTarget Field Functions 
      bool hasSessionTarget() const { return this->sessionTarget_ != nullptr;};
      void deleteSessionTarget() { this->sessionTarget_ = nullptr;};
      inline string getSessionTarget() const { DARABONBA_PTR_GET_DEFAULT(sessionTarget_, "") };
      inline Job& setSessionTarget(string sessionTarget) { DARABONBA_PTR_SET_VALUE(sessionTarget_, sessionTarget) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline const Job::State & getState() const { DARABONBA_PTR_GET_CONST(state_, Job::State) };
      inline Job::State getState() { DARABONBA_PTR_GET(state_, Job::State) };
      inline Job& setState(const Job::State & state) { DARABONBA_PTR_SET_VALUE(state_, state) };
      inline Job& setState(Job::State && state) { DARABONBA_PTR_SET_RVALUE(state_, state) };


      // updatedAtMs Field Functions 
      bool hasUpdatedAtMs() const { return this->updatedAtMs_ != nullptr;};
      void deleteUpdatedAtMs() { this->updatedAtMs_ = nullptr;};
      inline int64_t getUpdatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(updatedAtMs_, 0L) };
      inline Job& setUpdatedAtMs(int64_t updatedAtMs) { DARABONBA_PTR_SET_VALUE(updatedAtMs_, updatedAtMs) };


      // wakeMode Field Functions 
      bool hasWakeMode() const { return this->wakeMode_ != nullptr;};
      void deleteWakeMode() { this->wakeMode_ = nullptr;};
      inline string getWakeMode() const { DARABONBA_PTR_GET_DEFAULT(wakeMode_, "") };
      inline Job& setWakeMode(string wakeMode) { DARABONBA_PTR_SET_VALUE(wakeMode_, wakeMode) };


    protected:
      // The optional ID of the Agent that runs the job.
      shared_ptr<string> agentId_ {};
      // The creation timestamp, in milliseconds.
      shared_ptr<int64_t> createdAtMs_ {};
      // Indicates whether the job is deleted after its first run.
      shared_ptr<bool> deleteAfterRun_ {};
      // The optional result delivery configuration.
      shared_ptr<Job::Delivery> delivery_ {};
      // The optional job description.
      shared_ptr<string> description_ {};
      // Indicates whether the job is enabled.
      shared_ptr<bool> enabled_ {};
      // The job ID (UUID).
      shared_ptr<string> id_ {};
      // The job name.
      shared_ptr<string> name_ {};
      // The execution payload configuration.
      shared_ptr<Job::Payload> payload_ {};
      // **The run history. Returned only if `IncludeRuns` is `true`.**
      shared_ptr<vector<Job::Runs>> runs_ {};
      // The schedule configuration.
      shared_ptr<Job::Schedule> schedule_ {};
      // The optional session routing key.
      shared_ptr<string> sessionKey_ {};
      // The session target. Valid values: `main`, `isolated`, or `current`.
      shared_ptr<string> sessionTarget_ {};
      // **The running state of the job.**
      shared_ptr<Job::State> state_ {};
      // The last update timestamp, in milliseconds.
      shared_ptr<int64_t> updatedAtMs_ {};
      // The wake mode. Valid values: `now` or `next-heartbeat`.
      shared_ptr<string> wakeMode_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->job_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawCronJobResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdatePolarClawCronJobResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const UpdatePolarClawCronJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, UpdatePolarClawCronJobResponseBody::Job) };
    inline UpdatePolarClawCronJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, UpdatePolarClawCronJobResponseBody::Job) };
    inline UpdatePolarClawCronJobResponseBody& setJob(const UpdatePolarClawCronJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline UpdatePolarClawCronJobResponseBody& setJob(UpdatePolarClawCronJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePolarClawCronJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline UpdatePolarClawCronJobResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePolarClawCronJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // Details of the updated job.
    shared_ptr<UpdatePolarClawCronJobResponseBody::Job> job_ {};
    // The success message.
    shared_ptr<string> message_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> ok_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
