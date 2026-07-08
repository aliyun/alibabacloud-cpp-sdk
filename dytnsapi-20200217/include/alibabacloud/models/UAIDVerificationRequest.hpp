// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UAIDVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UAIDVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class UAIDVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UAIDVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserGrantId, userGrantId_);
    };
    friend void from_json(const Darabonba::Json& j, UAIDVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserGrantId, userGrantId_);
    };
    UAIDVerificationRequest() = default ;
    UAIDVerificationRequest(const UAIDVerificationRequest &) = default ;
    UAIDVerificationRequest(UAIDVerificationRequest &&) = default ;
    UAIDVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UAIDVerificationRequest() = default ;
    UAIDVerificationRequest& operator=(const UAIDVerificationRequest &) = default ;
    UAIDVerificationRequest& operator=(UAIDVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->carrier_ == nullptr && this->ip_ == nullptr && this->outId_ == nullptr && this->ownerId_ == nullptr && this->province_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->token_ == nullptr && this->userGrantId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline UAIDVerificationRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline UAIDVerificationRequest& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline UAIDVerificationRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline UAIDVerificationRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UAIDVerificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline UAIDVerificationRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UAIDVerificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UAIDVerificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline UAIDVerificationRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userGrantId Field Functions 
    bool hasUserGrantId() const { return this->userGrantId_ != nullptr;};
    void deleteUserGrantId() { this->userGrantId_ = nullptr;};
    inline string getUserGrantId() const { DARABONBA_PTR_GET_DEFAULT(userGrantId_, "") };
    inline UAIDVerificationRequest& setUserGrantId(string userGrantId) { DARABONBA_PTR_SET_VALUE(userGrantId_, userGrantId) };


  protected:
    // The authorization code.
    // 
    // > In **Cell Phone Number Service** -> [**Tag Marketplace**](https://dytns.console.aliyun.com/analysis/square), select a tag and submit a usage application. After the application is approved, you will obtain this authorization code.
    // 
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // The carrier of the user. Valid values:
    // - **CM**: China Mobile.
    // - **CU**: China Unicom.
    // - **CT**: China Telecom.
    // 
    // This parameter is required.
    shared_ptr<string> carrier_ {};
    // The public IP address. This parameter is required when the carrier is China Unicom (CU). Both IPv4 and IPv6 addresses are supported.
    shared_ptr<string> ip_ {};
    // The external serial number.
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The province ID. This parameter is optional when the carrier is China Unicom (CU). The value must be the same as the value of the province field in the response returned when the token is obtained.
    shared_ptr<string> province_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The carrier authorization token.  
    // > For information about how to obtain the authorization token and its signature, see the GetUAIDApplyTokenSign API documentation.
    // 
    // This parameter is required.
    shared_ptr<string> token_ {};
    // The user authorization code, which indicates that the user has granted authorization. The value must be a unique random number that does not exceed 128 characters in length.  
    // 
    // <warning>When you integrate the service, we recommend that you include UAID-related content in the privacy policy of your product.</warning>
    shared_ptr<string> userGrantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
