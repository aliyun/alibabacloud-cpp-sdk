// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WHATSAPPCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WHATSAPPCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class WhatsappCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WhatsappCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessNumber, businessNumber_);
      DARABONBA_PTR_TO_JSON(CallAction, callAction_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Session, session_);
      DARABONBA_PTR_TO_JSON(UserNumber, userNumber_);
    };
    friend void from_json(const Darabonba::Json& j, WhatsappCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessNumber, businessNumber_);
      DARABONBA_PTR_FROM_JSON(CallAction, callAction_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Session, session_);
      DARABONBA_PTR_FROM_JSON(UserNumber, userNumber_);
    };
    WhatsappCallRequest() = default ;
    WhatsappCallRequest(const WhatsappCallRequest &) = default ;
    WhatsappCallRequest(WhatsappCallRequest &&) = default ;
    WhatsappCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WhatsappCallRequest() = default ;
    WhatsappCallRequest& operator=(const WhatsappCallRequest &) = default ;
    WhatsappCallRequest& operator=(WhatsappCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Session : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Session& obj) { 
        DARABONBA_PTR_TO_JSON(Sdp, sdp_);
        DARABONBA_PTR_TO_JSON(SdpType, sdpType_);
      };
      friend void from_json(const Darabonba::Json& j, Session& obj) { 
        DARABONBA_PTR_FROM_JSON(Sdp, sdp_);
        DARABONBA_PTR_FROM_JSON(SdpType, sdpType_);
      };
      Session() = default ;
      Session(const Session &) = default ;
      Session(Session &&) = default ;
      Session(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Session() = default ;
      Session& operator=(const Session &) = default ;
      Session& operator=(Session &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sdp_ == nullptr
        && this->sdpType_ == nullptr; };
      // sdp Field Functions 
      bool hasSdp() const { return this->sdp_ != nullptr;};
      void deleteSdp() { this->sdp_ = nullptr;};
      inline string getSdp() const { DARABONBA_PTR_GET_DEFAULT(sdp_, "") };
      inline Session& setSdp(string sdp) { DARABONBA_PTR_SET_VALUE(sdp_, sdp) };


      // sdpType Field Functions 
      bool hasSdpType() const { return this->sdpType_ != nullptr;};
      void deleteSdpType() { this->sdpType_ = nullptr;};
      inline string getSdpType() const { DARABONBA_PTR_GET_DEFAULT(sdpType_, "") };
      inline Session& setSdpType(string sdpType) { DARABONBA_PTR_SET_VALUE(sdpType_, sdpType) };


    protected:
      shared_ptr<string> sdp_ {};
      shared_ptr<string> sdpType_ {};
    };

    virtual bool empty() const override { return this->businessNumber_ == nullptr
        && this->callAction_ == nullptr && this->callId_ == nullptr && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->session_ == nullptr && this->userNumber_ == nullptr; };
    // businessNumber Field Functions 
    bool hasBusinessNumber() const { return this->businessNumber_ != nullptr;};
    void deleteBusinessNumber() { this->businessNumber_ = nullptr;};
    inline string getBusinessNumber() const { DARABONBA_PTR_GET_DEFAULT(businessNumber_, "") };
    inline WhatsappCallRequest& setBusinessNumber(string businessNumber) { DARABONBA_PTR_SET_VALUE(businessNumber_, businessNumber) };


    // callAction Field Functions 
    bool hasCallAction() const { return this->callAction_ != nullptr;};
    void deleteCallAction() { this->callAction_ = nullptr;};
    inline string getCallAction() const { DARABONBA_PTR_GET_DEFAULT(callAction_, "") };
    inline WhatsappCallRequest& setCallAction(string callAction) { DARABONBA_PTR_SET_VALUE(callAction_, callAction) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline WhatsappCallRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline WhatsappCallRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline WhatsappCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline WhatsappCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline WhatsappCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline const WhatsappCallRequest::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, WhatsappCallRequest::Session) };
    inline WhatsappCallRequest::Session getSession() { DARABONBA_PTR_GET(session_, WhatsappCallRequest::Session) };
    inline WhatsappCallRequest& setSession(const WhatsappCallRequest::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
    inline WhatsappCallRequest& setSession(WhatsappCallRequest::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


    // userNumber Field Functions 
    bool hasUserNumber() const { return this->userNumber_ != nullptr;};
    void deleteUserNumber() { this->userNumber_ = nullptr;};
    inline string getUserNumber() const { DARABONBA_PTR_GET_DEFAULT(userNumber_, "") };
    inline WhatsappCallRequest& setUserNumber(string userNumber) { DARABONBA_PTR_SET_VALUE(userNumber_, userNumber) };


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
    shared_ptr<WhatsappCallRequest::Session> session_ {};
    shared_ptr<string> userNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
