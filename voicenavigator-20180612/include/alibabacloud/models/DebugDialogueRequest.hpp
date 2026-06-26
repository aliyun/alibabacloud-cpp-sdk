// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEBUGDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DebugDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalContext, additionalContext_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
    };
    friend void from_json(const Darabonba::Json& j, DebugDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalContext, additionalContext_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
    };
    DebugDialogueRequest() = default ;
    DebugDialogueRequest(const DebugDialogueRequest &) = default ;
    DebugDialogueRequest(DebugDialogueRequest &&) = default ;
    DebugDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugDialogueRequest() = default ;
    DebugDialogueRequest& operator=(const DebugDialogueRequest &) = default ;
    DebugDialogueRequest& operator=(DebugDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalContext_ == nullptr
        && this->conversationId_ == nullptr && this->instanceId_ == nullptr && this->utterance_ == nullptr; };
    // additionalContext Field Functions 
    bool hasAdditionalContext() const { return this->additionalContext_ != nullptr;};
    void deleteAdditionalContext() { this->additionalContext_ = nullptr;};
    inline string getAdditionalContext() const { DARABONBA_PTR_GET_DEFAULT(additionalContext_, "") };
    inline DebugDialogueRequest& setAdditionalContext(string additionalContext) { DARABONBA_PTR_SET_VALUE(additionalContext_, additionalContext) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline DebugDialogueRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DebugDialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline DebugDialogueRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


  protected:
    // The context of the conversation.
    shared_ptr<string> additionalContext_ {};
    // The ID of the conversation.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The user\\"s utterance.
    // 
    // This parameter is required.
    shared_ptr<string> utterance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
