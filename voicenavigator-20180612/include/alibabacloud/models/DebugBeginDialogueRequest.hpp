// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGBEGINDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEBUGBEGINDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DebugBeginDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugBeginDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InitialContext, initialContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ShouldUseSandBox, shouldUseSandBox_);
    };
    friend void from_json(const Darabonba::Json& j, DebugBeginDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InitialContext, initialContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ShouldUseSandBox, shouldUseSandBox_);
    };
    DebugBeginDialogueRequest() = default ;
    DebugBeginDialogueRequest(const DebugBeginDialogueRequest &) = default ;
    DebugBeginDialogueRequest(DebugBeginDialogueRequest &&) = default ;
    DebugBeginDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugBeginDialogueRequest() = default ;
    DebugBeginDialogueRequest& operator=(const DebugBeginDialogueRequest &) = default ;
    DebugBeginDialogueRequest& operator=(DebugBeginDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && this->callingNumber_ == nullptr && this->conversationId_ == nullptr && this->initialContext_ == nullptr && this->instanceId_ == nullptr && this->shouldUseSandBox_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline DebugBeginDialogueRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline DebugBeginDialogueRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline DebugBeginDialogueRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // initialContext Field Functions 
    bool hasInitialContext() const { return this->initialContext_ != nullptr;};
    void deleteInitialContext() { this->initialContext_ = nullptr;};
    inline string getInitialContext() const { DARABONBA_PTR_GET_DEFAULT(initialContext_, "") };
    inline DebugBeginDialogueRequest& setInitialContext(string initialContext) { DARABONBA_PTR_SET_VALUE(initialContext_, initialContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DebugBeginDialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // shouldUseSandBox Field Functions 
    bool hasShouldUseSandBox() const { return this->shouldUseSandBox_ != nullptr;};
    void deleteShouldUseSandBox() { this->shouldUseSandBox_ = nullptr;};
    inline bool getShouldUseSandBox() const { DARABONBA_PTR_GET_DEFAULT(shouldUseSandBox_, false) };
    inline DebugBeginDialogueRequest& setShouldUseSandBox(bool shouldUseSandBox) { DARABONBA_PTR_SET_VALUE(shouldUseSandBox_, shouldUseSandBox) };


  protected:
    // The called number.
    shared_ptr<string> calledNumber_ {};
    // The calling number.
    // 
    // This parameter is required.
    shared_ptr<string> callingNumber_ {};
    // The unique ID of the conversation.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The initial context of the conversation.
    shared_ptr<string> initialContext_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> shouldUseSandBox_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
