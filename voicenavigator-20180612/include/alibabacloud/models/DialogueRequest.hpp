// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalContext, additionalContext_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Emotion, emotion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
    };
    friend void from_json(const Darabonba::Json& j, DialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalContext, additionalContext_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Emotion, emotion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
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
    virtual bool empty() const override { return this->additionalContext_ == nullptr
        && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->conversationId_ == nullptr && this->emotion_ == nullptr && this->instanceId_ == nullptr
        && this->instanceOwnerId_ == nullptr && this->utterance_ == nullptr; };
    // additionalContext Field Functions 
    bool hasAdditionalContext() const { return this->additionalContext_ != nullptr;};
    void deleteAdditionalContext() { this->additionalContext_ = nullptr;};
    inline string getAdditionalContext() const { DARABONBA_PTR_GET_DEFAULT(additionalContext_, "") };
    inline DialogueRequest& setAdditionalContext(string additionalContext) { DARABONBA_PTR_SET_VALUE(additionalContext_, additionalContext) };


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


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline DialogueRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline string getEmotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
    inline DialogueRequest& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline DialogueRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline DialogueRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


  protected:
    shared_ptr<string> additionalContext_ {};
    shared_ptr<string> calledNumber_ {};
    shared_ptr<string> callingNumber_ {};
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    shared_ptr<string> emotion_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> instanceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> utterance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
