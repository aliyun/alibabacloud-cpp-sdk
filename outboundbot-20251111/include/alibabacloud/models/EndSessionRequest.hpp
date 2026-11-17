// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENDSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class EndSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, EndSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    EndSessionRequest() = default ;
    EndSessionRequest(const EndSessionRequest &) = default ;
    EndSessionRequest(EndSessionRequest &&) = default ;
    EndSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndSessionRequest() = default ;
    EndSessionRequest& operator=(const EndSessionRequest &) = default ;
    EndSessionRequest& operator=(EndSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->scriptId_ == nullptr && this->sessionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EndSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline EndSessionRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EndSessionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The instance identity of the associated product. You must use an existing instance that the invoker is authorized to access. The instance must match the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definitions.
    shared_ptr<string> instanceId_ {};
    // The ID of the dialog scenario under the instance. You must specify an existing scenario. Subsequent dialog and session termination requests for the same text session must use the same scenario that was used to start the session.
    shared_ptr<string> scriptId_ {};
    // The session ID used to uniquely identify the current interaction. For a text session, use the text- prefixed ID returned when the session is started. For web voice, use the ws- prefixed ID. For outbound call tests with real numbers, use the test- prefixed ID. Subsequent calls must use the actual returned values.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
