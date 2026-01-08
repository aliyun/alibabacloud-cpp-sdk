// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONVERSATIONALAUTOMATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONVERSATIONALAUTOMATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdateConversationalAutomationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConversationalAutomationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commandsShrink_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(EnableWelcomeMessage, enableWelcomeMessage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Prompts, promptsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConversationalAutomationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commandsShrink_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(EnableWelcomeMessage, enableWelcomeMessage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Prompts, promptsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateConversationalAutomationShrinkRequest() = default ;
    UpdateConversationalAutomationShrinkRequest(const UpdateConversationalAutomationShrinkRequest &) = default ;
    UpdateConversationalAutomationShrinkRequest(UpdateConversationalAutomationShrinkRequest &&) = default ;
    UpdateConversationalAutomationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConversationalAutomationShrinkRequest() = default ;
    UpdateConversationalAutomationShrinkRequest& operator=(const UpdateConversationalAutomationShrinkRequest &) = default ;
    UpdateConversationalAutomationShrinkRequest& operator=(UpdateConversationalAutomationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandsShrink_ == nullptr
        && this->custSpaceId_ == nullptr && this->enableWelcomeMessage_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->promptsShrink_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // commandsShrink Field Functions 
    bool hasCommandsShrink() const { return this->commandsShrink_ != nullptr;};
    void deleteCommandsShrink() { this->commandsShrink_ = nullptr;};
    inline string getCommandsShrink() const { DARABONBA_PTR_GET_DEFAULT(commandsShrink_, "") };
    inline UpdateConversationalAutomationShrinkRequest& setCommandsShrink(string commandsShrink) { DARABONBA_PTR_SET_VALUE(commandsShrink_, commandsShrink) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdateConversationalAutomationShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // enableWelcomeMessage Field Functions 
    bool hasEnableWelcomeMessage() const { return this->enableWelcomeMessage_ != nullptr;};
    void deleteEnableWelcomeMessage() { this->enableWelcomeMessage_ = nullptr;};
    inline bool getEnableWelcomeMessage() const { DARABONBA_PTR_GET_DEFAULT(enableWelcomeMessage_, false) };
    inline UpdateConversationalAutomationShrinkRequest& setEnableWelcomeMessage(bool enableWelcomeMessage) { DARABONBA_PTR_SET_VALUE(enableWelcomeMessage_, enableWelcomeMessage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateConversationalAutomationShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdateConversationalAutomationShrinkRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // promptsShrink Field Functions 
    bool hasPromptsShrink() const { return this->promptsShrink_ != nullptr;};
    void deletePromptsShrink() { this->promptsShrink_ = nullptr;};
    inline string getPromptsShrink() const { DARABONBA_PTR_GET_DEFAULT(promptsShrink_, "") };
    inline UpdateConversationalAutomationShrinkRequest& setPromptsShrink(string promptsShrink) { DARABONBA_PTR_SET_VALUE(promptsShrink_, promptsShrink) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateConversationalAutomationShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateConversationalAutomationShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The commands.
    shared_ptr<string> commandsShrink_ {};
    // The space ID of the RAM user within the independent software vendor (ISV) account or the instance ID of the customer of Alibaba Cloud.
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // Specifies whether to enable the welcoming message.
    shared_ptr<bool> enableWelcomeMessage_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The phone number of the enterprise.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // The opening remarks.
    shared_ptr<string> promptsShrink_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
