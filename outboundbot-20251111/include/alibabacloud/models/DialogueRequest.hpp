// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class DialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Extras, extras_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
    };
    friend void from_json(const Darabonba::Json& j, DialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Extras, extras_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
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
    virtual bool empty() const override { return this->extras_ == nullptr
        && this->instanceId_ == nullptr && this->scriptId_ == nullptr && this->sessionId_ == nullptr && this->utterance_ == nullptr; };
    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline string getExtras() const { DARABONBA_PTR_GET_DEFAULT(extras_, "") };
    inline DialogueRequest& setExtras(string extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DialogueRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DialogueRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline DialogueRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


  protected:
    // The JSON array string of additional input events. Supports DTMF key press events (dataType=DTMF, dtmf is the key content), Silence events (dataType=Silence), and RuntimePrompts events (dataType=RuntimePrompts, prompts is the prompt text, persistent specifies whether to persist). For example, a silence event is [{"dataType":"Silence"}]. This parameter is optional when no additional events are present.
    shared_ptr<string> extras_ {};
    // The instance identity of the associated product. You must use an instance that the invoker has permission to access and that actually exists. It must be consistent with the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definition.
    shared_ptr<string> instanceId_ {};
    // The ID of the conversation scenario under the instance. Specify an existing scenario. Subsequent conversations and end requests for the same text session must use the scenario specified when the session was initiated.
    shared_ptr<string> scriptId_ {};
    // The session ID used to uniquely associate this interaction. For a text session, it is the text- identifier returned when the session is initiated. For web voice, it is the ws- identifier. For real number outbound call tests, it is the test- identifier. Subsequent calls must use the actual returned value.
    shared_ptr<string> sessionId_ {};
    // The text input content of the user for the current round. For normal conversations, pass the actual text of the user. Events such as key presses or silence can be passed through Extras. The processing method is determined by the scenario and the engine.
    shared_ptr<string> utterance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
