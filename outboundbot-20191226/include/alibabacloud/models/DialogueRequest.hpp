// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionKey, actionKey_);
      DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
    };
    friend void from_json(const Darabonba::Json& j, DialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionKey, actionKey_);
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
    };
    DialogueRequest() = default ;
    DialogueRequest(const DialogueRequest &) = default ;
    DialogueRequest(DialogueRequest &&) = default ;
    DialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DialogueRequest() = default ;
    DialogueRequest& operator=(const DialogueRequest &) = default ;
    DialogueRequest& operator=(DialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionKey_ == nullptr
        && this->actionParams_ == nullptr && this->callId_ == nullptr && this->callType_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr
        && this->instanceId_ == nullptr && this->scenarioId_ == nullptr && this->scriptId_ == nullptr && this->taskId_ == nullptr && this->utterance_ == nullptr; };
    // actionKey Field Functions 
    bool hasActionKey() const { return this->actionKey_ != nullptr;};
    void deleteActionKey() { this->actionKey_ = nullptr;};
    inline string getActionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
    inline DialogueRequest& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline string getActionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
    inline DialogueRequest& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline DialogueRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline DialogueRequest& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline DialogueRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline DialogueRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline DialogueRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DialogueRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DialogueRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline DialogueRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


  protected:
    shared_ptr<string> actionKey_ {};
    shared_ptr<string> actionParams_ {};
    // This parameter is required.
    shared_ptr<string> callId_ {};
    // This parameter is required.
    shared_ptr<string> callType_ {};
    // This parameter is required.
    shared_ptr<string> calledNumber_ {};
    // This parameter is required.
    shared_ptr<string> callingNumber_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> scenarioId_ {};
    // 场景id
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> utterance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
