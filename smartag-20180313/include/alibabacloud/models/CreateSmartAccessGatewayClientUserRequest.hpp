// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMARTACCESSGATEWAYCLIENTUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMARTACCESSGATEWAYCLIENTUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateSmartAccessGatewayClientUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmartAccessGatewayClientUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(UserMail, userMail_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmartAccessGatewayClientUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(UserMail, userMail_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateSmartAccessGatewayClientUserRequest() = default ;
    CreateSmartAccessGatewayClientUserRequest(const CreateSmartAccessGatewayClientUserRequest &) = default ;
    CreateSmartAccessGatewayClientUserRequest(CreateSmartAccessGatewayClientUserRequest &&) = default ;
    CreateSmartAccessGatewayClientUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmartAccessGatewayClientUserRequest() = default ;
    CreateSmartAccessGatewayClientUserRequest& operator=(const CreateSmartAccessGatewayClientUserRequest &) = default ;
    CreateSmartAccessGatewayClientUserRequest& operator=(CreateSmartAccessGatewayClientUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientIp_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr && this->userMail_ == nullptr && this->userName_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateSmartAccessGatewayClientUserRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmartAccessGatewayClientUserRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmartAccessGatewayClientUserRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // userMail Field Functions 
    bool hasUserMail() const { return this->userMail_ != nullptr;};
    void deleteUserMail() { this->userMail_ = nullptr;};
    inline string getUserMail() const { DARABONBA_PTR_GET_DEFAULT(userMail_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setUserMail(string userMail) { DARABONBA_PTR_SET_VALUE(userMail_, userMail) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateSmartAccessGatewayClientUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The maximum bandwidth value. Unit: Kbit/s. Valid values: **1 to 20000**. Default value: **2000**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> bandwidth_ {};
    // *   If you enable the client app service, you must set the IP address of the client app. The current client account uses the specified IP address to connect to Alibaba Cloud.
    // 
    // >  The IP address must fall within a private CIDR block.
    // 
    // *   If you disable the client app service, an IP address within a private CIDR block is assigned to the client account. Each connection to Alibaba Cloud uses a different IP address.
    shared_ptr<string> clientIp_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password that is used to log on to the SAG app.
    // 
    // The password must be 8 to 32 characters in length. It can contain letters, digits, underscores (_), at signs (@), and hyphens (-). It must start with a letter or a digit.
    shared_ptr<string> password_ {};
    // The region ID of the Smart Access Gateway (SAG) app instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the SAG app instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The email address of the client account. The username and password are sent to the specified email address by the administrator.
    // 
    // This parameter is required.
    shared_ptr<string> userMail_ {};
    // The username of the client account. The usernames of client accounts added to the same SAG app instance must be unique.
    // 
    // The username must be 7 to 33 characters in length, and can contain letters, digits, underscores (_), at signs (@), periods (.), and hyphens (-). It must start with a letter or a digit.
    // 
    // >  For a client account, if you specify the username, you must also specify the password. If you specify the password, you must specify the username.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
