// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHONENUMBERIDENTIFICATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPHONENUMBERIDENTIFICATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
namespace Models
{
  class GetPhoneNumberIdentificationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhoneNumberIdentificationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionPayload, sessionPayload_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhoneNumberIdentificationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionPayload, sessionPayload_);
    };
    GetPhoneNumberIdentificationResultRequest() = default ;
    GetPhoneNumberIdentificationResultRequest(const GetPhoneNumberIdentificationResultRequest &) = default ;
    GetPhoneNumberIdentificationResultRequest(GetPhoneNumberIdentificationResultRequest &&) = default ;
    GetPhoneNumberIdentificationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhoneNumberIdentificationResultRequest() = default ;
    GetPhoneNumberIdentificationResultRequest& operator=(const GetPhoneNumberIdentificationResultRequest &) = default ;
    GetPhoneNumberIdentificationResultRequest& operator=(GetPhoneNumberIdentificationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->outId_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sessionId_ == nullptr && this->sessionPayload_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetPhoneNumberIdentificationResultRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline GetPhoneNumberIdentificationResultRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetPhoneNumberIdentificationResultRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetPhoneNumberIdentificationResultRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetPhoneNumberIdentificationResultRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetPhoneNumberIdentificationResultRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetPhoneNumberIdentificationResultRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionPayload Field Functions 
    bool hasSessionPayload() const { return this->sessionPayload_ != nullptr;};
    void deleteSessionPayload() { this->sessionPayload_ = nullptr;};
    inline string getSessionPayload() const { DARABONBA_PTR_GET_DEFAULT(sessionPayload_, "") };
    inline GetPhoneNumberIdentificationResultRequest& setSessionPayload(string sessionPayload) { DARABONBA_PTR_SET_VALUE(sessionPayload_, sessionPayload) };


  protected:
    // The authorization code.
    // 
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // The external ID.
    // 
    // This parameter is required.
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The phone number of the subscriber. The phone number to be verified must be in the Mobile Station International Subscriber Directory Number (MSISDN) format.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The session ID.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The session payload.
    // 
    // This parameter is required.
    shared_ptr<string> sessionPayload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
