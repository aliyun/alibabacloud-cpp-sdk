// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SSECHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SSECHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianChatBot20241105
{
namespace Models
{
  class SseChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SseChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderNick, senderNick_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
      DARABONBA_PTR_TO_JSON(VendorParam, vendorParam_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SseChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderNick, senderNick_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
      DARABONBA_PTR_FROM_JSON(VendorParam, vendorParam_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SseChatRequest() = default ;
    SseChatRequest(const SseChatRequest &) = default ;
    SseChatRequest(SseChatRequest &&) = default ;
    SseChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SseChatRequest() = default ;
    SseChatRequest& operator=(const SseChatRequest &) = default ;
    SseChatRequest& operator=(SseChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->command_ != nullptr && this->senderId_ != nullptr && this->senderNick_ != nullptr && this->sessionId_ != nullptr && this->utterance_ != nullptr
        && this->vendorParam_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SseChatRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline SseChatRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline SseChatRequest& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderNick Field Functions 
    bool hasSenderNick() const { return this->senderNick_ != nullptr;};
    void deleteSenderNick() { this->senderNick_ = nullptr;};
    inline string senderNick() const { DARABONBA_PTR_GET_DEFAULT(senderNick_, "") };
    inline SseChatRequest& setSenderNick(string senderNick) { DARABONBA_PTR_SET_VALUE(senderNick_, senderNick) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SseChatRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string utterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline SseChatRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


    // vendorParam Field Functions 
    bool hasVendorParam() const { return this->vendorParam_ != nullptr;};
    void deleteVendorParam() { this->vendorParam_ = nullptr;};
    inline string vendorParam() const { DARABONBA_PTR_GET_DEFAULT(vendorParam_, "") };
    inline SseChatRequest& setVendorParam(string vendorParam) { DARABONBA_PTR_SET_VALUE(vendorParam_, vendorParam) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SseChatRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<string> senderId_ = nullptr;
    std::shared_ptr<string> senderNick_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> utterance_ = nullptr;
    std::shared_ptr<string> vendorParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianChatBot20241105
#endif
