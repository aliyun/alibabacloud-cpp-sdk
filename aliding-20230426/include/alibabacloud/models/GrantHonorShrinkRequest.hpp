// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTHONORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTHONORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GrantHonorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantHonorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(grantReason, grantReason_);
      DARABONBA_PTR_TO_JSON(granterName, granterName_);
      DARABONBA_PTR_TO_JSON(honorId, honorId_);
      DARABONBA_PTR_TO_JSON(noticeAnnouncer, noticeAnnouncer_);
      DARABONBA_PTR_TO_JSON(noticeSingle, noticeSingle_);
      DARABONBA_PTR_TO_JSON(openConversationIds, openConversationIdsShrink_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(receiverUserIds, receiverUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(senderUserId, senderUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantHonorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(grantReason, grantReason_);
      DARABONBA_PTR_FROM_JSON(granterName, granterName_);
      DARABONBA_PTR_FROM_JSON(honorId, honorId_);
      DARABONBA_PTR_FROM_JSON(noticeAnnouncer, noticeAnnouncer_);
      DARABONBA_PTR_FROM_JSON(noticeSingle, noticeSingle_);
      DARABONBA_PTR_FROM_JSON(openConversationIds, openConversationIdsShrink_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(receiverUserIds, receiverUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(senderUserId, senderUserId_);
    };
    GrantHonorShrinkRequest() = default ;
    GrantHonorShrinkRequest(const GrantHonorShrinkRequest &) = default ;
    GrantHonorShrinkRequest(GrantHonorShrinkRequest &&) = default ;
    GrantHonorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantHonorShrinkRequest() = default ;
    GrantHonorShrinkRequest& operator=(const GrantHonorShrinkRequest &) = default ;
    GrantHonorShrinkRequest& operator=(GrantHonorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->expirationTime_ == nullptr && this->grantReason_ == nullptr && this->granterName_ == nullptr && this->honorId_ == nullptr && this->noticeAnnouncer_ == nullptr
        && this->noticeSingle_ == nullptr && this->openConversationIdsShrink_ == nullptr && this->orgId_ == nullptr && this->receiverUserIdsShrink_ == nullptr && this->senderUserId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GrantHonorShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline GrantHonorShrinkRequest& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // grantReason Field Functions 
    bool hasGrantReason() const { return this->grantReason_ != nullptr;};
    void deleteGrantReason() { this->grantReason_ = nullptr;};
    inline string getGrantReason() const { DARABONBA_PTR_GET_DEFAULT(grantReason_, "") };
    inline GrantHonorShrinkRequest& setGrantReason(string grantReason) { DARABONBA_PTR_SET_VALUE(grantReason_, grantReason) };


    // granterName Field Functions 
    bool hasGranterName() const { return this->granterName_ != nullptr;};
    void deleteGranterName() { this->granterName_ = nullptr;};
    inline string getGranterName() const { DARABONBA_PTR_GET_DEFAULT(granterName_, "") };
    inline GrantHonorShrinkRequest& setGranterName(string granterName) { DARABONBA_PTR_SET_VALUE(granterName_, granterName) };


    // honorId Field Functions 
    bool hasHonorId() const { return this->honorId_ != nullptr;};
    void deleteHonorId() { this->honorId_ = nullptr;};
    inline string getHonorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, "") };
    inline GrantHonorShrinkRequest& setHonorId(string honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


    // noticeAnnouncer Field Functions 
    bool hasNoticeAnnouncer() const { return this->noticeAnnouncer_ != nullptr;};
    void deleteNoticeAnnouncer() { this->noticeAnnouncer_ = nullptr;};
    inline bool getNoticeAnnouncer() const { DARABONBA_PTR_GET_DEFAULT(noticeAnnouncer_, false) };
    inline GrantHonorShrinkRequest& setNoticeAnnouncer(bool noticeAnnouncer) { DARABONBA_PTR_SET_VALUE(noticeAnnouncer_, noticeAnnouncer) };


    // noticeSingle Field Functions 
    bool hasNoticeSingle() const { return this->noticeSingle_ != nullptr;};
    void deleteNoticeSingle() { this->noticeSingle_ = nullptr;};
    inline bool getNoticeSingle() const { DARABONBA_PTR_GET_DEFAULT(noticeSingle_, false) };
    inline GrantHonorShrinkRequest& setNoticeSingle(bool noticeSingle) { DARABONBA_PTR_SET_VALUE(noticeSingle_, noticeSingle) };


    // openConversationIdsShrink Field Functions 
    bool hasOpenConversationIdsShrink() const { return this->openConversationIdsShrink_ != nullptr;};
    void deleteOpenConversationIdsShrink() { this->openConversationIdsShrink_ = nullptr;};
    inline string getOpenConversationIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(openConversationIdsShrink_, "") };
    inline GrantHonorShrinkRequest& setOpenConversationIdsShrink(string openConversationIdsShrink) { DARABONBA_PTR_SET_VALUE(openConversationIdsShrink_, openConversationIdsShrink) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline GrantHonorShrinkRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // receiverUserIdsShrink Field Functions 
    bool hasReceiverUserIdsShrink() const { return this->receiverUserIdsShrink_ != nullptr;};
    void deleteReceiverUserIdsShrink() { this->receiverUserIdsShrink_ = nullptr;};
    inline string getReceiverUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(receiverUserIdsShrink_, "") };
    inline GrantHonorShrinkRequest& setReceiverUserIdsShrink(string receiverUserIdsShrink) { DARABONBA_PTR_SET_VALUE(receiverUserIdsShrink_, receiverUserIdsShrink) };


    // senderUserId Field Functions 
    bool hasSenderUserId() const { return this->senderUserId_ != nullptr;};
    void deleteSenderUserId() { this->senderUserId_ = nullptr;};
    inline string getSenderUserId() const { DARABONBA_PTR_GET_DEFAULT(senderUserId_, "") };
    inline GrantHonorShrinkRequest& setSenderUserId(string senderUserId) { DARABONBA_PTR_SET_VALUE(senderUserId_, senderUserId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<int64_t> expirationTime_ {};
    // This parameter is required.
    shared_ptr<string> grantReason_ {};
    // This parameter is required.
    shared_ptr<string> granterName_ {};
    // This parameter is required.
    shared_ptr<string> honorId_ {};
    shared_ptr<bool> noticeAnnouncer_ {};
    shared_ptr<bool> noticeSingle_ {};
    shared_ptr<string> openConversationIdsShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> orgId_ {};
    // This parameter is required.
    shared_ptr<string> receiverUserIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> senderUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
