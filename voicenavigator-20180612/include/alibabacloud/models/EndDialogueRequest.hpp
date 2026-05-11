// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENDDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class EndDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(HangUpParams, hangUpParams_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, EndDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(HangUpParams, hangUpParams_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
    };
    EndDialogueRequest() = default ;
    EndDialogueRequest(const EndDialogueRequest &) = default ;
    EndDialogueRequest(EndDialogueRequest &&) = default ;
    EndDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndDialogueRequest() = default ;
    EndDialogueRequest& operator=(const EndDialogueRequest &) = default ;
    EndDialogueRequest& operator=(EndDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->hangUpParams_ == nullptr && this->instanceId_ == nullptr && this->instanceOwnerId_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline EndDialogueRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // hangUpParams Field Functions 
    bool hasHangUpParams() const { return this->hangUpParams_ != nullptr;};
    void deleteHangUpParams() { this->hangUpParams_ = nullptr;};
    inline string getHangUpParams() const { DARABONBA_PTR_GET_DEFAULT(hangUpParams_, "") };
    inline EndDialogueRequest& setHangUpParams(string hangUpParams) { DARABONBA_PTR_SET_VALUE(hangUpParams_, hangUpParams) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EndDialogueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline EndDialogueRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    shared_ptr<string> hangUpParams_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> instanceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
