// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOTALPUBLICURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOTALPUBLICURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetTotalPublicUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTotalPublicUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(CheckSubs, checkSubs_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PartnerKey, partnerKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTotalPublicUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(CheckSubs, checkSubs_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PartnerKey, partnerKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    GetTotalPublicUrlRequest() = default ;
    GetTotalPublicUrlRequest(const GetTotalPublicUrlRequest &) = default ;
    GetTotalPublicUrlRequest(GetTotalPublicUrlRequest &&) = default ;
    GetTotalPublicUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTotalPublicUrlRequest() = default ;
    GetTotalPublicUrlRequest& operator=(const GetTotalPublicUrlRequest &) = default ;
    GetTotalPublicUrlRequest& operator=(GetTotalPublicUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && return this->callTime_ == nullptr && return this->checkSubs_ == nullptr && return this->ownerId_ == nullptr && return this->partnerKey_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline GetTotalPublicUrlRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline string callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
    inline GetTotalPublicUrlRequest& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // checkSubs Field Functions 
    bool hasCheckSubs() const { return this->checkSubs_ != nullptr;};
    void deleteCheckSubs() { this->checkSubs_ = nullptr;};
    inline bool checkSubs() const { DARABONBA_PTR_GET_DEFAULT(checkSubs_, false) };
    inline GetTotalPublicUrlRequest& setCheckSubs(bool checkSubs) { DARABONBA_PTR_SET_VALUE(checkSubs_, checkSubs) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetTotalPublicUrlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // partnerKey Field Functions 
    bool hasPartnerKey() const { return this->partnerKey_ != nullptr;};
    void deletePartnerKey() { this->partnerKey_ = nullptr;};
    inline string partnerKey() const { DARABONBA_PTR_GET_DEFAULT(partnerKey_, "") };
    inline GetTotalPublicUrlRequest& setPartnerKey(string partnerKey) { DARABONBA_PTR_SET_VALUE(partnerKey_, partnerKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetTotalPublicUrlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetTotalPublicUrlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the call record.
    // 
    // Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view **Call Record ID** on the **Call Record Query** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> callId_ = nullptr;
    // The call initiation time in the call record.
    // 
    // Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account). View **Call Initiated At** on the **Call Record Query** page, or view the call_time field in the Call Detail Record (CDR) receipt.
    // 
    // This parameter is required.
    std::shared_ptr<string> callTime_ = nullptr;
    // Specifies whether the verification on the binding ID is required.
    // 
    // This parameter is required.
    std::shared_ptr<bool> checkSubs_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The key of the phone number pool. Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view the key of the phone number pool on the **Number Pool Management** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> partnerKey_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
