// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENDSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
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
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> scriptId_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
