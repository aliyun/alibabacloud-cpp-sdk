// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BEGINDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BEGINDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class BeginDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BeginDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InitialContext, initialContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, BeginDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InitialContext, initialContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
    };
    BeginDialogueRequest() = default ;
    BeginDialogueRequest(const BeginDialogueRequest &) = default ;
    BeginDialogueRequest(BeginDialogueRequest &&) = default ;
    BeginDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BeginDialogueRequest() = default ;
    BeginDialogueRequest& operator=(const BeginDialogueRequest &) = default ;
    BeginDialogueRequest& operator=(BeginDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && this->callingNumber_ == nullptr && this->conversationId_ == nullptr && this->initialContext_ == nullptr && this->instanceId_ == nullptr && this->instanceOwnerId_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline BeginDialogueRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline BeginDialogueRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline BeginDialogueRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // initialContext Field Functions 
    bool hasInitialContext() const { return this->initialContext_ != nullptr;};
    void deleteInitialContext() { this->initialContext_ = nullptr;};
    inline string getInitialContext() const { DARABONBA_PTR_GET_DEFAULT(initialContext_, "") };
    inline BeginDialogueRequest& setInitialContext(string initialContext) { DARABONBA_PTR_SET_VALUE(initialContext_, initialContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BeginDialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline BeginDialogueRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


  protected:
    shared_ptr<string> calledNumber_ {};
    // This parameter is required.
    shared_ptr<string> callingNumber_ {};
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    shared_ptr<string> initialContext_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> instanceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
