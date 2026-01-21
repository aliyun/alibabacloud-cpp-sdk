// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVECOMMANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVECOMMANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListApproveCommandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApproveCommandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApproveCommands, approveCommands_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApproveCommandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproveCommands, approveCommands_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApproveCommandsResponseBody() = default ;
    ListApproveCommandsResponseBody(const ListApproveCommandsResponseBody &) = default ;
    ListApproveCommandsResponseBody(ListApproveCommandsResponseBody &&) = default ;
    ListApproveCommandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApproveCommandsResponseBody() = default ;
    ListApproveCommandsResponseBody& operator=(const ListApproveCommandsResponseBody &) = default ;
    ListApproveCommandsResponseBody& operator=(ListApproveCommandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApproveCommands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApproveCommands& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ApproveCommands& obj) { 
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
      ApproveCommands() = default ;
      ApproveCommands(const ApproveCommands &) = default ;
      ApproveCommands(ApproveCommands &&) = default ;
      ApproveCommands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApproveCommands() = default ;
      ApproveCommands& operator=(const ApproveCommands &) = default ;
      ApproveCommands& operator=(ApproveCommands &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->approveCommandId_ == nullptr
        && this->assetAccountName_ == nullptr && this->assetIp_ == nullptr && this->assetName_ == nullptr && this->clientIp_ == nullptr && this->clientUser_ == nullptr
        && this->command_ == nullptr && this->createTime_ == nullptr && this->protocolName_ == nullptr && this->sessionId_ == nullptr && this->state_ == nullptr; };
      // approveCommandId Field Functions 
      bool hasApproveCommandId() const { return this->approveCommandId_ != nullptr;};
      void deleteApproveCommandId() { this->approveCommandId_ = nullptr;};
      inline string getApproveCommandId() const { DARABONBA_PTR_GET_DEFAULT(approveCommandId_, "") };
      inline ApproveCommands& setApproveCommandId(string approveCommandId) { DARABONBA_PTR_SET_VALUE(approveCommandId_, approveCommandId) };


      // assetAccountName Field Functions 
      bool hasAssetAccountName() const { return this->assetAccountName_ != nullptr;};
      void deleteAssetAccountName() { this->assetAccountName_ = nullptr;};
      inline string getAssetAccountName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountName_, "") };
      inline ApproveCommands& setAssetAccountName(string assetAccountName) { DARABONBA_PTR_SET_VALUE(assetAccountName_, assetAccountName) };


      // assetIp Field Functions 
      bool hasAssetIp() const { return this->assetIp_ != nullptr;};
      void deleteAssetIp() { this->assetIp_ = nullptr;};
      inline string getAssetIp() const { DARABONBA_PTR_GET_DEFAULT(assetIp_, "") };
      inline ApproveCommands& setAssetIp(string assetIp) { DARABONBA_PTR_SET_VALUE(assetIp_, assetIp) };


      // assetName Field Functions 
      bool hasAssetName() const { return this->assetName_ != nullptr;};
      void deleteAssetName() { this->assetName_ = nullptr;};
      inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
      inline ApproveCommands& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline ApproveCommands& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // clientUser Field Functions 
      bool hasClientUser() const { return this->clientUser_ != nullptr;};
      void deleteClientUser() { this->clientUser_ = nullptr;};
      inline string getClientUser() const { DARABONBA_PTR_GET_DEFAULT(clientUser_, "") };
      inline ApproveCommands& setClientUser(string clientUser) { DARABONBA_PTR_SET_VALUE(clientUser_, clientUser) };


      // command Field Functions 
      bool hasCommand() const { return this->command_ != nullptr;};
      void deleteCommand() { this->command_ = nullptr;};
      inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
      inline ApproveCommands& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ApproveCommands& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline ApproveCommands& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline ApproveCommands& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ApproveCommands& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the command to be reviewed.
      shared_ptr<string> approveCommandId_ {};
      // The username of the asset account that is used for O\\&M.
      shared_ptr<string> assetAccountName_ {};
      // The IP address of the asset for O\\&M.
      shared_ptr<string> assetIp_ {};
      // The name of the asset.
      shared_ptr<string> assetName_ {};
      // The source IP address from which the application is submitted.
      shared_ptr<string> clientIp_ {};
      // The Bastionhost user who submitted the O\\&M application.
      shared_ptr<string> clientUser_ {};
      // The command to be reviewed.
      shared_ptr<string> command_ {};
      // The time when the O\\&M application was submitted. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<string> createTime_ {};
      // The O\\&M protocol.
      shared_ptr<string> protocolName_ {};
      // The ID of the O\\&M session that triggered the review.
      shared_ptr<string> sessionId_ {};
      // The status of the review. Valid values: **Wait**: The command is pending review.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->approveCommands_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // approveCommands Field Functions 
    bool hasApproveCommands() const { return this->approveCommands_ != nullptr;};
    void deleteApproveCommands() { this->approveCommands_ = nullptr;};
    inline const vector<ListApproveCommandsResponseBody::ApproveCommands> & getApproveCommands() const { DARABONBA_PTR_GET_CONST(approveCommands_, vector<ListApproveCommandsResponseBody::ApproveCommands>) };
    inline vector<ListApproveCommandsResponseBody::ApproveCommands> getApproveCommands() { DARABONBA_PTR_GET(approveCommands_, vector<ListApproveCommandsResponseBody::ApproveCommands>) };
    inline ListApproveCommandsResponseBody& setApproveCommands(const vector<ListApproveCommandsResponseBody::ApproveCommands> & approveCommands) { DARABONBA_PTR_SET_VALUE(approveCommands_, approveCommands) };
    inline ListApproveCommandsResponseBody& setApproveCommands(vector<ListApproveCommandsResponseBody::ApproveCommands> && approveCommands) { DARABONBA_PTR_SET_RVALUE(approveCommands_, approveCommands) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApproveCommandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApproveCommandsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The commands to be reviewed.
    shared_ptr<vector<ListApproveCommandsResponseBody::ApproveCommands>> approveCommands_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of commands to be reviewed.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
