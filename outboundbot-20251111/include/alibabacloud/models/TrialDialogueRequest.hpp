// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIALDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIALDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class TrialDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrialDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Extras, extras_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
      DARABONBA_PTR_TO_JSON(VisitorToken, visitorToken_);
    };
    friend void from_json(const Darabonba::Json& j, TrialDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Extras, extras_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
      DARABONBA_PTR_FROM_JSON(VisitorToken, visitorToken_);
    };
    TrialDialogueRequest() = default ;
    TrialDialogueRequest(const TrialDialogueRequest &) = default ;
    TrialDialogueRequest(TrialDialogueRequest &&) = default ;
    TrialDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrialDialogueRequest() = default ;
    TrialDialogueRequest& operator=(const TrialDialogueRequest &) = default ;
    TrialDialogueRequest& operator=(TrialDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extras_ == nullptr
        && this->instanceId_ == nullptr && this->scriptId_ == nullptr && this->sessionId_ == nullptr && this->utterance_ == nullptr && this->visitorToken_ == nullptr; };
    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline string getExtras() const { DARABONBA_PTR_GET_DEFAULT(extras_, "") };
    inline TrialDialogueRequest& setExtras(string extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TrialDialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline TrialDialogueRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TrialDialogueRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline TrialDialogueRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


    // visitorToken Field Functions 
    bool hasVisitorToken() const { return this->visitorToken_ != nullptr;};
    void deleteVisitorToken() { this->visitorToken_ = nullptr;};
    inline string getVisitorToken() const { DARABONBA_PTR_GET_DEFAULT(visitorToken_, "") };
    inline TrialDialogueRequest& setVisitorToken(string visitorToken) { DARABONBA_PTR_SET_VALUE(visitorToken_, visitorToken) };


  protected:
    // The JSON array string of additional input events. Supports DTMF key press events (dataType=DTMF, where dtmf is the key content), silence events (dataType=Silence), and runtime prompt events (dataType=RuntimePrompts, where prompts is the prompt text and persistent specifies whether to persist the prompts). For example, a silence event is [{"dataType":"Silence"}]. If no additional events exist, you can leave this parameter empty.
    shared_ptr<string> extras_ {};
    // The instance identity of the product. You must use an existing instance that you have access to when you invoke the service. The instance must be the same as the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definition.
    shared_ptr<string> instanceId_ {};
    // The ID of the conversation scenario under the instance. Specify an existing scenario. Subsequent conversations and end requests for the same text conversation must use the scenario specified when the conversation was started.
    shared_ptr<string> scriptId_ {};
    // The session ID used to uniquely associate this interaction. For a text conversation, it is the text- identifier returned when the conversation is started. For web voice, it is the ws- identifier. For real number outbound call tests, it is the test- identifier. Subsequent calls must use the actual return value.
    shared_ptr<string> sessionId_ {};
    // The text input content of the user for the current turn. For normal conversations, pass the actual text of the user. Events such as key presses or silence can be passed through Extras. The processing method is determined by the scenario and engine.
    shared_ptr<string> utterance_ {};
    // The visitor token obtained from the experience link, used to locate the trial channel and verify access permissions and validity period. The token is generated by the channel service and should not be constructed manually. It cannot be empty and must still be within its validity period. The example is a placeholder value that cannot be used for authentication. Do not disclose the actual token to unrelated personnel.
    // 
    // This parameter is required.
    shared_ptr<string> visitorToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
