// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWCRONJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWCRONJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawCronJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawCronJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(DeleteAfterRun, deleteAfterRun_);
      DARABONBA_PTR_TO_JSON(Delivery, deliveryShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FailureAlert, failureAlertShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(RunImmediately, runImmediately_);
      DARABONBA_PTR_TO_JSON(Schedule, scheduleShrink_);
      DARABONBA_PTR_TO_JSON(SessionKey, sessionKey_);
      DARABONBA_PTR_TO_JSON(SessionTarget, sessionTarget_);
      DARABONBA_PTR_TO_JSON(WakeMode, wakeMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawCronJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(DeleteAfterRun, deleteAfterRun_);
      DARABONBA_PTR_FROM_JSON(Delivery, deliveryShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FailureAlert, failureAlertShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(RunImmediately, runImmediately_);
      DARABONBA_PTR_FROM_JSON(Schedule, scheduleShrink_);
      DARABONBA_PTR_FROM_JSON(SessionKey, sessionKey_);
      DARABONBA_PTR_FROM_JSON(SessionTarget, sessionTarget_);
      DARABONBA_PTR_FROM_JSON(WakeMode, wakeMode_);
    };
    CreatePolarClawCronJobShrinkRequest() = default ;
    CreatePolarClawCronJobShrinkRequest(const CreatePolarClawCronJobShrinkRequest &) = default ;
    CreatePolarClawCronJobShrinkRequest(CreatePolarClawCronJobShrinkRequest &&) = default ;
    CreatePolarClawCronJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawCronJobShrinkRequest() = default ;
    CreatePolarClawCronJobShrinkRequest& operator=(const CreatePolarClawCronJobShrinkRequest &) = default ;
    CreatePolarClawCronJobShrinkRequest& operator=(CreatePolarClawCronJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->deleteAfterRun_ == nullptr && this->deliveryShrink_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr
        && this->failureAlertShrink_ == nullptr && this->name_ == nullptr && this->payloadShrink_ == nullptr && this->restart_ == nullptr && this->runImmediately_ == nullptr
        && this->scheduleShrink_ == nullptr && this->sessionKey_ == nullptr && this->sessionTarget_ == nullptr && this->wakeMode_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // deleteAfterRun Field Functions 
    bool hasDeleteAfterRun() const { return this->deleteAfterRun_ != nullptr;};
    void deleteDeleteAfterRun() { this->deleteAfterRun_ = nullptr;};
    inline bool getDeleteAfterRun() const { DARABONBA_PTR_GET_DEFAULT(deleteAfterRun_, false) };
    inline CreatePolarClawCronJobShrinkRequest& setDeleteAfterRun(bool deleteAfterRun) { DARABONBA_PTR_SET_VALUE(deleteAfterRun_, deleteAfterRun) };


    // deliveryShrink Field Functions 
    bool hasDeliveryShrink() const { return this->deliveryShrink_ != nullptr;};
    void deleteDeliveryShrink() { this->deliveryShrink_ = nullptr;};
    inline string getDeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(deliveryShrink_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setDeliveryShrink(string deliveryShrink) { DARABONBA_PTR_SET_VALUE(deliveryShrink_, deliveryShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreatePolarClawCronJobShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // failureAlertShrink Field Functions 
    bool hasFailureAlertShrink() const { return this->failureAlertShrink_ != nullptr;};
    void deleteFailureAlertShrink() { this->failureAlertShrink_ = nullptr;};
    inline string getFailureAlertShrink() const { DARABONBA_PTR_GET_DEFAULT(failureAlertShrink_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setFailureAlertShrink(string failureAlertShrink) { DARABONBA_PTR_SET_VALUE(failureAlertShrink_, failureAlertShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // payloadShrink Field Functions 
    bool hasPayloadShrink() const { return this->payloadShrink_ != nullptr;};
    void deletePayloadShrink() { this->payloadShrink_ = nullptr;};
    inline string getPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(payloadShrink_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setPayloadShrink(string payloadShrink) { DARABONBA_PTR_SET_VALUE(payloadShrink_, payloadShrink) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline CreatePolarClawCronJobShrinkRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // runImmediately Field Functions 
    bool hasRunImmediately() const { return this->runImmediately_ != nullptr;};
    void deleteRunImmediately() { this->runImmediately_ = nullptr;};
    inline bool getRunImmediately() const { DARABONBA_PTR_GET_DEFAULT(runImmediately_, false) };
    inline CreatePolarClawCronJobShrinkRequest& setRunImmediately(bool runImmediately) { DARABONBA_PTR_SET_VALUE(runImmediately_, runImmediately) };


    // scheduleShrink Field Functions 
    bool hasScheduleShrink() const { return this->scheduleShrink_ != nullptr;};
    void deleteScheduleShrink() { this->scheduleShrink_ = nullptr;};
    inline string getScheduleShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleShrink_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setScheduleShrink(string scheduleShrink) { DARABONBA_PTR_SET_VALUE(scheduleShrink_, scheduleShrink) };


    // sessionKey Field Functions 
    bool hasSessionKey() const { return this->sessionKey_ != nullptr;};
    void deleteSessionKey() { this->sessionKey_ = nullptr;};
    inline string getSessionKey() const { DARABONBA_PTR_GET_DEFAULT(sessionKey_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setSessionKey(string sessionKey) { DARABONBA_PTR_SET_VALUE(sessionKey_, sessionKey) };


    // sessionTarget Field Functions 
    bool hasSessionTarget() const { return this->sessionTarget_ != nullptr;};
    void deleteSessionTarget() { this->sessionTarget_ = nullptr;};
    inline string getSessionTarget() const { DARABONBA_PTR_GET_DEFAULT(sessionTarget_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setSessionTarget(string sessionTarget) { DARABONBA_PTR_SET_VALUE(sessionTarget_, sessionTarget) };


    // wakeMode Field Functions 
    bool hasWakeMode() const { return this->wakeMode_ != nullptr;};
    void deleteWakeMode() { this->wakeMode_ = nullptr;};
    inline string getWakeMode() const { DARABONBA_PTR_GET_DEFAULT(wakeMode_, "") };
    inline CreatePolarClawCronJobShrinkRequest& setWakeMode(string wakeMode) { DARABONBA_PTR_SET_VALUE(wakeMode_, wakeMode) };


  protected:
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> deleteAfterRun_ {};
    shared_ptr<string> deliveryShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> failureAlertShrink_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> payloadShrink_ {};
    shared_ptr<bool> restart_ {};
    shared_ptr<bool> runImmediately_ {};
    // This parameter is required.
    shared_ptr<string> scheduleShrink_ {};
    shared_ptr<string> sessionKey_ {};
    // This parameter is required.
    shared_ptr<string> sessionTarget_ {};
    // This parameter is required.
    shared_ptr<string> wakeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
