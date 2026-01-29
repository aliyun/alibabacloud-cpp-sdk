// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WHATSAPPCALLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WHATSAPPCALLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class WhatsappCallShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WhatsappCallShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessNumber, businessNumber_);
      DARABONBA_PTR_TO_JSON(CallAction, callAction_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Session, sessionShrink_);
      DARABONBA_PTR_TO_JSON(UserNumber, userNumber_);
    };
    friend void from_json(const Darabonba::Json& j, WhatsappCallShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessNumber, businessNumber_);
      DARABONBA_PTR_FROM_JSON(CallAction, callAction_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Session, sessionShrink_);
      DARABONBA_PTR_FROM_JSON(UserNumber, userNumber_);
    };
    WhatsappCallShrinkRequest() = default ;
    WhatsappCallShrinkRequest(const WhatsappCallShrinkRequest &) = default ;
    WhatsappCallShrinkRequest(WhatsappCallShrinkRequest &&) = default ;
    WhatsappCallShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WhatsappCallShrinkRequest() = default ;
    WhatsappCallShrinkRequest& operator=(const WhatsappCallShrinkRequest &) = default ;
    WhatsappCallShrinkRequest& operator=(WhatsappCallShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessNumber_ == nullptr
        && this->callAction_ == nullptr && this->callId_ == nullptr && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sessionShrink_ == nullptr && this->userNumber_ == nullptr; };
    // businessNumber Field Functions 
    bool hasBusinessNumber() const { return this->businessNumber_ != nullptr;};
    void deleteBusinessNumber() { this->businessNumber_ = nullptr;};
    inline string getBusinessNumber() const { DARABONBA_PTR_GET_DEFAULT(businessNumber_, "") };
    inline WhatsappCallShrinkRequest& setBusinessNumber(string businessNumber) { DARABONBA_PTR_SET_VALUE(businessNumber_, businessNumber) };


    // callAction Field Functions 
    bool hasCallAction() const { return this->callAction_ != nullptr;};
    void deleteCallAction() { this->callAction_ = nullptr;};
    inline string getCallAction() const { DARABONBA_PTR_GET_DEFAULT(callAction_, "") };
    inline WhatsappCallShrinkRequest& setCallAction(string callAction) { DARABONBA_PTR_SET_VALUE(callAction_, callAction) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline WhatsappCallShrinkRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline WhatsappCallShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline WhatsappCallShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline WhatsappCallShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline WhatsappCallShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionShrink Field Functions 
    bool hasSessionShrink() const { return this->sessionShrink_ != nullptr;};
    void deleteSessionShrink() { this->sessionShrink_ = nullptr;};
    inline string getSessionShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionShrink_, "") };
    inline WhatsappCallShrinkRequest& setSessionShrink(string sessionShrink) { DARABONBA_PTR_SET_VALUE(sessionShrink_, sessionShrink) };


    // userNumber Field Functions 
    bool hasUserNumber() const { return this->userNumber_ != nullptr;};
    void deleteUserNumber() { this->userNumber_ = nullptr;};
    inline string getUserNumber() const { DARABONBA_PTR_GET_DEFAULT(userNumber_, "") };
    inline WhatsappCallShrinkRequest& setUserNumber(string userNumber) { DARABONBA_PTR_SET_VALUE(userNumber_, userNumber) };


  protected:
    // This parameter is required.
    shared_ptr<string> businessNumber_ {};
    // This parameter is required.
    shared_ptr<string> callAction_ {};
    shared_ptr<string> callId_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> sessionShrink_ {};
    shared_ptr<string> userNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
