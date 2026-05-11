// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTEDNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COLLECTEDNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class CollectedNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectedNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalContext, additionalContext_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, CollectedNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalContext, additionalContext_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    CollectedNumberRequest() = default ;
    CollectedNumberRequest(const CollectedNumberRequest &) = default ;
    CollectedNumberRequest(CollectedNumberRequest &&) = default ;
    CollectedNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectedNumberRequest() = default ;
    CollectedNumberRequest& operator=(const CollectedNumberRequest &) = default ;
    CollectedNumberRequest& operator=(CollectedNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalContext_ == nullptr
        && this->conversationId_ == nullptr && this->instanceId_ == nullptr && this->instanceOwnerId_ == nullptr && this->number_ == nullptr; };
    // additionalContext Field Functions 
    bool hasAdditionalContext() const { return this->additionalContext_ != nullptr;};
    void deleteAdditionalContext() { this->additionalContext_ = nullptr;};
    inline string getAdditionalContext() const { DARABONBA_PTR_GET_DEFAULT(additionalContext_, "") };
    inline CollectedNumberRequest& setAdditionalContext(string additionalContext) { DARABONBA_PTR_SET_VALUE(additionalContext_, additionalContext) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CollectedNumberRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CollectedNumberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline CollectedNumberRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline CollectedNumberRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    shared_ptr<string> additionalContext_ {};
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> instanceOwnerId_ {};
    shared_ptr<string> number_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
