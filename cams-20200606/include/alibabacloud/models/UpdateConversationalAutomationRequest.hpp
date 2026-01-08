// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONVERSATIONALAUTOMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONVERSATIONALAUTOMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdateConversationalAutomationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConversationalAutomationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(EnableWelcomeMessage, enableWelcomeMessage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Prompts, prompts_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConversationalAutomationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(EnableWelcomeMessage, enableWelcomeMessage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateConversationalAutomationRequest() = default ;
    UpdateConversationalAutomationRequest(const UpdateConversationalAutomationRequest &) = default ;
    UpdateConversationalAutomationRequest(UpdateConversationalAutomationRequest &&) = default ;
    UpdateConversationalAutomationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConversationalAutomationRequest() = default ;
    UpdateConversationalAutomationRequest& operator=(const UpdateConversationalAutomationRequest &) = default ;
    UpdateConversationalAutomationRequest& operator=(UpdateConversationalAutomationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Commands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commands& obj) { 
        DARABONBA_PTR_TO_JSON(CommandDescription, commandDescription_);
        DARABONBA_PTR_TO_JSON(CommandName, commandName_);
      };
      friend void from_json(const Darabonba::Json& j, Commands& obj) { 
        DARABONBA_PTR_FROM_JSON(CommandDescription, commandDescription_);
        DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
      };
      Commands() = default ;
      Commands(const Commands &) = default ;
      Commands(Commands &&) = default ;
      Commands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commands() = default ;
      Commands& operator=(const Commands &) = default ;
      Commands& operator=(Commands &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commandDescription_ == nullptr
        && this->commandName_ == nullptr; };
      // commandDescription Field Functions 
      bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
      void deleteCommandDescription() { this->commandDescription_ = nullptr;};
      inline string getCommandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
      inline Commands& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


      // commandName Field Functions 
      bool hasCommandName() const { return this->commandName_ != nullptr;};
      void deleteCommandName() { this->commandName_ = nullptr;};
      inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
      inline Commands& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


    protected:
      // The description of the command.
      shared_ptr<string> commandDescription_ {};
      // The command name.
      shared_ptr<string> commandName_ {};
    };

    virtual bool empty() const override { return this->commands_ == nullptr
        && this->custSpaceId_ == nullptr && this->enableWelcomeMessage_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->prompts_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<UpdateConversationalAutomationRequest::Commands> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<UpdateConversationalAutomationRequest::Commands>) };
    inline vector<UpdateConversationalAutomationRequest::Commands> getCommands() { DARABONBA_PTR_GET(commands_, vector<UpdateConversationalAutomationRequest::Commands>) };
    inline UpdateConversationalAutomationRequest& setCommands(const vector<UpdateConversationalAutomationRequest::Commands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline UpdateConversationalAutomationRequest& setCommands(vector<UpdateConversationalAutomationRequest::Commands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdateConversationalAutomationRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // enableWelcomeMessage Field Functions 
    bool hasEnableWelcomeMessage() const { return this->enableWelcomeMessage_ != nullptr;};
    void deleteEnableWelcomeMessage() { this->enableWelcomeMessage_ = nullptr;};
    inline bool getEnableWelcomeMessage() const { DARABONBA_PTR_GET_DEFAULT(enableWelcomeMessage_, false) };
    inline UpdateConversationalAutomationRequest& setEnableWelcomeMessage(bool enableWelcomeMessage) { DARABONBA_PTR_SET_VALUE(enableWelcomeMessage_, enableWelcomeMessage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateConversationalAutomationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdateConversationalAutomationRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<string> & getPrompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<string>) };
    inline vector<string> getPrompts() { DARABONBA_PTR_GET(prompts_, vector<string>) };
    inline UpdateConversationalAutomationRequest& setPrompts(const vector<string> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline UpdateConversationalAutomationRequest& setPrompts(vector<string> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateConversationalAutomationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateConversationalAutomationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The commands.
    shared_ptr<vector<UpdateConversationalAutomationRequest::Commands>> commands_ {};
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
    shared_ptr<vector<string>> prompts_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
