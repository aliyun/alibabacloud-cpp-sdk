// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWCRONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWCRONJOBREQUEST_HPP_
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
  class UpdatePolarClawCronJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawCronJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(DeleteAfterRun, deleteAfterRun_);
      DARABONBA_PTR_TO_JSON(Delivery, delivery_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FailureAlert, failureAlert_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SessionKey, sessionKey_);
      DARABONBA_PTR_TO_JSON(SessionTarget, sessionTarget_);
      DARABONBA_PTR_TO_JSON(WakeMode, wakeMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawCronJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(DeleteAfterRun, deleteAfterRun_);
      DARABONBA_PTR_FROM_JSON(Delivery, delivery_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FailureAlert, failureAlert_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SessionKey, sessionKey_);
      DARABONBA_PTR_FROM_JSON(SessionTarget, sessionTarget_);
      DARABONBA_PTR_FROM_JSON(WakeMode, wakeMode_);
    };
    UpdatePolarClawCronJobRequest() = default ;
    UpdatePolarClawCronJobRequest(const UpdatePolarClawCronJobRequest &) = default ;
    UpdatePolarClawCronJobRequest(UpdatePolarClawCronJobRequest &&) = default ;
    UpdatePolarClawCronJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawCronJobRequest() = default ;
    UpdatePolarClawCronJobRequest& operator=(const UpdatePolarClawCronJobRequest &) = default ;
    UpdatePolarClawCronJobRequest& operator=(UpdatePolarClawCronJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schedule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
        DARABONBA_PTR_TO_JSON(AnchorMs, anchorMs_);
        DARABONBA_PTR_TO_JSON(At, at_);
        DARABONBA_PTR_TO_JSON(EveryMs, everyMs_);
        DARABONBA_PTR_TO_JSON(Expr, expr_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(StaggerMs, staggerMs_);
        DARABONBA_PTR_TO_JSON(Tz, tz_);
      };
      friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
        DARABONBA_PTR_FROM_JSON(AnchorMs, anchorMs_);
        DARABONBA_PTR_FROM_JSON(At, at_);
        DARABONBA_PTR_FROM_JSON(EveryMs, everyMs_);
        DARABONBA_PTR_FROM_JSON(Expr, expr_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(StaggerMs, staggerMs_);
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
        && this->at_ == nullptr && this->everyMs_ == nullptr && this->expr_ == nullptr && this->kind_ == nullptr && this->staggerMs_ == nullptr
        && this->tz_ == nullptr; };
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


      // staggerMs Field Functions 
      bool hasStaggerMs() const { return this->staggerMs_ != nullptr;};
      void deleteStaggerMs() { this->staggerMs_ = nullptr;};
      inline int32_t getStaggerMs() const { DARABONBA_PTR_GET_DEFAULT(staggerMs_, 0) };
      inline Schedule& setStaggerMs(int32_t staggerMs) { DARABONBA_PTR_SET_VALUE(staggerMs_, staggerMs) };


      // tz Field Functions 
      bool hasTz() const { return this->tz_ != nullptr;};
      void deleteTz() { this->tz_ = nullptr;};
      inline string getTz() const { DARABONBA_PTR_GET_DEFAULT(tz_, "") };
      inline Schedule& setTz(string tz) { DARABONBA_PTR_SET_VALUE(tz_, tz) };


    protected:
      shared_ptr<int64_t> anchorMs_ {};
      shared_ptr<string> at_ {};
      shared_ptr<int64_t> everyMs_ {};
      shared_ptr<string> expr_ {};
      shared_ptr<string> kind_ {};
      shared_ptr<int32_t> staggerMs_ {};
      shared_ptr<string> tz_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(BestEffortDeliver, bestEffortDeliver_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(Deliver, deliver_);
        DARABONBA_PTR_TO_JSON(Fallbacks, fallbacks_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(LightContext, lightContext_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(Thinking, thinking_);
        DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
        DARABONBA_PTR_TO_JSON(To, to_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(BestEffortDeliver, bestEffortDeliver_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(Deliver, deliver_);
        DARABONBA_PTR_FROM_JSON(Fallbacks, fallbacks_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(LightContext, lightContext_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(Thinking, thinking_);
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
        && this->channel_ == nullptr && this->deliver_ == nullptr && this->fallbacks_ == nullptr && this->kind_ == nullptr && this->lightContext_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->text_ == nullptr && this->thinking_ == nullptr && this->timeoutSeconds_ == nullptr
        && this->to_ == nullptr; };
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


      // fallbacks Field Functions 
      bool hasFallbacks() const { return this->fallbacks_ != nullptr;};
      void deleteFallbacks() { this->fallbacks_ = nullptr;};
      inline const vector<string> & getFallbacks() const { DARABONBA_PTR_GET_CONST(fallbacks_, vector<string>) };
      inline vector<string> getFallbacks() { DARABONBA_PTR_GET(fallbacks_, vector<string>) };
      inline Payload& setFallbacks(const vector<string> & fallbacks) { DARABONBA_PTR_SET_VALUE(fallbacks_, fallbacks) };
      inline Payload& setFallbacks(vector<string> && fallbacks) { DARABONBA_PTR_SET_RVALUE(fallbacks_, fallbacks) };


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


      // thinking Field Functions 
      bool hasThinking() const { return this->thinking_ != nullptr;};
      void deleteThinking() { this->thinking_ = nullptr;};
      inline string getThinking() const { DARABONBA_PTR_GET_DEFAULT(thinking_, "") };
      inline Payload& setThinking(string thinking) { DARABONBA_PTR_SET_VALUE(thinking_, thinking) };


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
      shared_ptr<bool> bestEffortDeliver_ {};
      shared_ptr<string> channel_ {};
      shared_ptr<bool> deliver_ {};
      shared_ptr<vector<string>> fallbacks_ {};
      shared_ptr<string> kind_ {};
      shared_ptr<bool> lightContext_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> model_ {};
      shared_ptr<string> text_ {};
      shared_ptr<string> thinking_ {};
      shared_ptr<int32_t> timeoutSeconds_ {};
      shared_ptr<string> to_ {};
    };

    class FailureAlert : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailureAlert& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(After, after_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(CooldownMs, cooldownMs_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(To, to_);
      };
      friend void from_json(const Darabonba::Json& j, FailureAlert& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(After, after_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(CooldownMs, cooldownMs_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(To, to_);
      };
      FailureAlert() = default ;
      FailureAlert(const FailureAlert &) = default ;
      FailureAlert(FailureAlert &&) = default ;
      FailureAlert(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailureAlert() = default ;
      FailureAlert& operator=(const FailureAlert &) = default ;
      FailureAlert& operator=(FailureAlert &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->after_ == nullptr && this->channel_ == nullptr && this->cooldownMs_ == nullptr && this->mode_ == nullptr && this->to_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline FailureAlert& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // after Field Functions 
      bool hasAfter() const { return this->after_ != nullptr;};
      void deleteAfter() { this->after_ = nullptr;};
      inline int32_t getAfter() const { DARABONBA_PTR_GET_DEFAULT(after_, 0) };
      inline FailureAlert& setAfter(int32_t after) { DARABONBA_PTR_SET_VALUE(after_, after) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline FailureAlert& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // cooldownMs Field Functions 
      bool hasCooldownMs() const { return this->cooldownMs_ != nullptr;};
      void deleteCooldownMs() { this->cooldownMs_ = nullptr;};
      inline int32_t getCooldownMs() const { DARABONBA_PTR_GET_DEFAULT(cooldownMs_, 0) };
      inline FailureAlert& setCooldownMs(int32_t cooldownMs) { DARABONBA_PTR_SET_VALUE(cooldownMs_, cooldownMs) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline FailureAlert& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // to Field Functions 
      bool hasTo() const { return this->to_ != nullptr;};
      void deleteTo() { this->to_ = nullptr;};
      inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
      inline FailureAlert& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<int32_t> after_ {};
      shared_ptr<string> channel_ {};
      shared_ptr<int32_t> cooldownMs_ {};
      shared_ptr<string> mode_ {};
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
      shared_ptr<string> accountId_ {};
      shared_ptr<bool> bestEffort_ {};
      shared_ptr<string> channel_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<string> to_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->deleteAfterRun_ == nullptr && this->delivery_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr
        && this->failureAlert_ == nullptr && this->jobId_ == nullptr && this->name_ == nullptr && this->payload_ == nullptr && this->restart_ == nullptr
        && this->schedule_ == nullptr && this->sessionKey_ == nullptr && this->sessionTarget_ == nullptr && this->wakeMode_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawCronJobRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawCronJobRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // deleteAfterRun Field Functions 
    bool hasDeleteAfterRun() const { return this->deleteAfterRun_ != nullptr;};
    void deleteDeleteAfterRun() { this->deleteAfterRun_ = nullptr;};
    inline bool getDeleteAfterRun() const { DARABONBA_PTR_GET_DEFAULT(deleteAfterRun_, false) };
    inline UpdatePolarClawCronJobRequest& setDeleteAfterRun(bool deleteAfterRun) { DARABONBA_PTR_SET_VALUE(deleteAfterRun_, deleteAfterRun) };


    // delivery Field Functions 
    bool hasDelivery() const { return this->delivery_ != nullptr;};
    void deleteDelivery() { this->delivery_ = nullptr;};
    inline const UpdatePolarClawCronJobRequest::Delivery & getDelivery() const { DARABONBA_PTR_GET_CONST(delivery_, UpdatePolarClawCronJobRequest::Delivery) };
    inline UpdatePolarClawCronJobRequest::Delivery getDelivery() { DARABONBA_PTR_GET(delivery_, UpdatePolarClawCronJobRequest::Delivery) };
    inline UpdatePolarClawCronJobRequest& setDelivery(const UpdatePolarClawCronJobRequest::Delivery & delivery) { DARABONBA_PTR_SET_VALUE(delivery_, delivery) };
    inline UpdatePolarClawCronJobRequest& setDelivery(UpdatePolarClawCronJobRequest::Delivery && delivery) { DARABONBA_PTR_SET_RVALUE(delivery_, delivery) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePolarClawCronJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdatePolarClawCronJobRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // failureAlert Field Functions 
    bool hasFailureAlert() const { return this->failureAlert_ != nullptr;};
    void deleteFailureAlert() { this->failureAlert_ = nullptr;};
    inline const UpdatePolarClawCronJobRequest::FailureAlert & getFailureAlert() const { DARABONBA_PTR_GET_CONST(failureAlert_, UpdatePolarClawCronJobRequest::FailureAlert) };
    inline UpdatePolarClawCronJobRequest::FailureAlert getFailureAlert() { DARABONBA_PTR_GET(failureAlert_, UpdatePolarClawCronJobRequest::FailureAlert) };
    inline UpdatePolarClawCronJobRequest& setFailureAlert(const UpdatePolarClawCronJobRequest::FailureAlert & failureAlert) { DARABONBA_PTR_SET_VALUE(failureAlert_, failureAlert) };
    inline UpdatePolarClawCronJobRequest& setFailureAlert(UpdatePolarClawCronJobRequest::FailureAlert && failureAlert) { DARABONBA_PTR_SET_RVALUE(failureAlert_, failureAlert) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdatePolarClawCronJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePolarClawCronJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const UpdatePolarClawCronJobRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, UpdatePolarClawCronJobRequest::Payload) };
    inline UpdatePolarClawCronJobRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, UpdatePolarClawCronJobRequest::Payload) };
    inline UpdatePolarClawCronJobRequest& setPayload(const UpdatePolarClawCronJobRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline UpdatePolarClawCronJobRequest& setPayload(UpdatePolarClawCronJobRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline UpdatePolarClawCronJobRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const UpdatePolarClawCronJobRequest::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, UpdatePolarClawCronJobRequest::Schedule) };
    inline UpdatePolarClawCronJobRequest::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, UpdatePolarClawCronJobRequest::Schedule) };
    inline UpdatePolarClawCronJobRequest& setSchedule(const UpdatePolarClawCronJobRequest::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline UpdatePolarClawCronJobRequest& setSchedule(UpdatePolarClawCronJobRequest::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // sessionKey Field Functions 
    bool hasSessionKey() const { return this->sessionKey_ != nullptr;};
    void deleteSessionKey() { this->sessionKey_ = nullptr;};
    inline string getSessionKey() const { DARABONBA_PTR_GET_DEFAULT(sessionKey_, "") };
    inline UpdatePolarClawCronJobRequest& setSessionKey(string sessionKey) { DARABONBA_PTR_SET_VALUE(sessionKey_, sessionKey) };


    // sessionTarget Field Functions 
    bool hasSessionTarget() const { return this->sessionTarget_ != nullptr;};
    void deleteSessionTarget() { this->sessionTarget_ = nullptr;};
    inline string getSessionTarget() const { DARABONBA_PTR_GET_DEFAULT(sessionTarget_, "") };
    inline UpdatePolarClawCronJobRequest& setSessionTarget(string sessionTarget) { DARABONBA_PTR_SET_VALUE(sessionTarget_, sessionTarget) };


    // wakeMode Field Functions 
    bool hasWakeMode() const { return this->wakeMode_ != nullptr;};
    void deleteWakeMode() { this->wakeMode_ = nullptr;};
    inline string getWakeMode() const { DARABONBA_PTR_GET_DEFAULT(wakeMode_, "") };
    inline UpdatePolarClawCronJobRequest& setWakeMode(string wakeMode) { DARABONBA_PTR_SET_VALUE(wakeMode_, wakeMode) };


  protected:
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> deleteAfterRun_ {};
    shared_ptr<UpdatePolarClawCronJobRequest::Delivery> delivery_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<UpdatePolarClawCronJobRequest::FailureAlert> failureAlert_ {};
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<UpdatePolarClawCronJobRequest::Payload> payload_ {};
    shared_ptr<bool> restart_ {};
    shared_ptr<UpdatePolarClawCronJobRequest::Schedule> schedule_ {};
    shared_ptr<string> sessionKey_ {};
    shared_ptr<string> sessionTarget_ {};
    shared_ptr<string> wakeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
