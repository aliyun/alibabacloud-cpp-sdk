// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SILENCETIMEOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SILENCETIMEOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class SilenceTimeoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SilenceTimeoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InitialContext, initialContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SilenceTimeoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InitialContext, initialContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
    };
    SilenceTimeoutRequest() = default ;
    SilenceTimeoutRequest(const SilenceTimeoutRequest &) = default ;
    SilenceTimeoutRequest(SilenceTimeoutRequest &&) = default ;
    SilenceTimeoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SilenceTimeoutRequest() = default ;
    SilenceTimeoutRequest& operator=(const SilenceTimeoutRequest &) = default ;
    SilenceTimeoutRequest& operator=(SilenceTimeoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->initialContext_ == nullptr && this->instanceId_ == nullptr && this->instanceOwnerId_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline SilenceTimeoutRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // initialContext Field Functions 
    bool hasInitialContext() const { return this->initialContext_ != nullptr;};
    void deleteInitialContext() { this->initialContext_ = nullptr;};
    inline string getInitialContext() const { DARABONBA_PTR_GET_DEFAULT(initialContext_, "") };
    inline SilenceTimeoutRequest& setInitialContext(string initialContext) { DARABONBA_PTR_SET_VALUE(initialContext_, initialContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SilenceTimeoutRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline SilenceTimeoutRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


  protected:
    // The ID of the conversation.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The context of the conversation.
    shared_ptr<string> initialContext_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the instance owner.
    shared_ptr<int64_t> instanceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
