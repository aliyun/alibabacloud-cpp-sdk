// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVECOMMANDSRESPONSEBODYAPPROVECOMMANDS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVECOMMANDSRESPONSEBODYAPPROVECOMMANDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListApproveCommandsResponseBodyApproveCommands : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApproveCommandsResponseBodyApproveCommands& obj) { 
      DARABONBA_PTR_TO_JSON(ApproveCommandId, approveCommandId_);
      DARABONBA_PTR_TO_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_TO_JSON(AssetIp, assetIp_);
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientUser, clientUser_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListApproveCommandsResponseBodyApproveCommands& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproveCommandId, approveCommandId_);
      DARABONBA_PTR_FROM_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_FROM_JSON(AssetIp, assetIp_);
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientUser, clientUser_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListApproveCommandsResponseBodyApproveCommands() = default ;
    ListApproveCommandsResponseBodyApproveCommands(const ListApproveCommandsResponseBodyApproveCommands &) = default ;
    ListApproveCommandsResponseBodyApproveCommands(ListApproveCommandsResponseBodyApproveCommands &&) = default ;
    ListApproveCommandsResponseBodyApproveCommands(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApproveCommandsResponseBodyApproveCommands() = default ;
    ListApproveCommandsResponseBodyApproveCommands& operator=(const ListApproveCommandsResponseBodyApproveCommands &) = default ;
    ListApproveCommandsResponseBodyApproveCommands& operator=(ListApproveCommandsResponseBodyApproveCommands &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approveCommandId_ != nullptr
        && this->assetAccountName_ != nullptr && this->assetIp_ != nullptr && this->assetName_ != nullptr && this->clientIp_ != nullptr && this->clientUser_ != nullptr
        && this->command_ != nullptr && this->createTime_ != nullptr && this->protocolName_ != nullptr && this->sessionId_ != nullptr && this->state_ != nullptr; };
    // approveCommandId Field Functions 
    bool hasApproveCommandId() const { return this->approveCommandId_ != nullptr;};
    void deleteApproveCommandId() { this->approveCommandId_ = nullptr;};
    inline string approveCommandId() const { DARABONBA_PTR_GET_DEFAULT(approveCommandId_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setApproveCommandId(string approveCommandId) { DARABONBA_PTR_SET_VALUE(approveCommandId_, approveCommandId) };


    // assetAccountName Field Functions 
    bool hasAssetAccountName() const { return this->assetAccountName_ != nullptr;};
    void deleteAssetAccountName() { this->assetAccountName_ = nullptr;};
    inline string assetAccountName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountName_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setAssetAccountName(string assetAccountName) { DARABONBA_PTR_SET_VALUE(assetAccountName_, assetAccountName) };


    // assetIp Field Functions 
    bool hasAssetIp() const { return this->assetIp_ != nullptr;};
    void deleteAssetIp() { this->assetIp_ = nullptr;};
    inline string assetIp() const { DARABONBA_PTR_GET_DEFAULT(assetIp_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setAssetIp(string assetIp) { DARABONBA_PTR_SET_VALUE(assetIp_, assetIp) };


    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientUser Field Functions 
    bool hasClientUser() const { return this->clientUser_ != nullptr;};
    void deleteClientUser() { this->clientUser_ = nullptr;};
    inline string clientUser() const { DARABONBA_PTR_GET_DEFAULT(clientUser_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setClientUser(string clientUser) { DARABONBA_PTR_SET_VALUE(clientUser_, clientUser) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListApproveCommandsResponseBodyApproveCommands& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the command to be reviewed.
    std::shared_ptr<string> approveCommandId_ = nullptr;
    // The username of the asset account that is used for O\\&M.
    std::shared_ptr<string> assetAccountName_ = nullptr;
    // The IP address of the asset for O\\&M.
    std::shared_ptr<string> assetIp_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> assetName_ = nullptr;
    // The source IP address from which the application is submitted.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The Bastionhost user who submitted the O\\&M application.
    std::shared_ptr<string> clientUser_ = nullptr;
    // The command to be reviewed.
    std::shared_ptr<string> command_ = nullptr;
    // The time when the O\\&M application was submitted. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // The O\\&M protocol.
    std::shared_ptr<string> protocolName_ = nullptr;
    // The ID of the O\\&M session that triggered the review.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The status of the review. Valid values: **Wait**: The command is pending review.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
