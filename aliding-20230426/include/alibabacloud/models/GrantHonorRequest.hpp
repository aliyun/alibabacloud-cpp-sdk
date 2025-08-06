// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTHONORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTHONORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GrantHonorRequestTenantContext.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GrantHonorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantHonorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(grantReason, grantReason_);
      DARABONBA_PTR_TO_JSON(granterName, granterName_);
      DARABONBA_PTR_TO_JSON(honorId, honorId_);
      DARABONBA_PTR_TO_JSON(noticeAnnouncer, noticeAnnouncer_);
      DARABONBA_PTR_TO_JSON(noticeSingle, noticeSingle_);
      DARABONBA_PTR_TO_JSON(openConversationIds, openConversationIds_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(receiverUserIds, receiverUserIds_);
      DARABONBA_PTR_TO_JSON(senderUserId, senderUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantHonorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(grantReason, grantReason_);
      DARABONBA_PTR_FROM_JSON(granterName, granterName_);
      DARABONBA_PTR_FROM_JSON(honorId, honorId_);
      DARABONBA_PTR_FROM_JSON(noticeAnnouncer, noticeAnnouncer_);
      DARABONBA_PTR_FROM_JSON(noticeSingle, noticeSingle_);
      DARABONBA_PTR_FROM_JSON(openConversationIds, openConversationIds_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(receiverUserIds, receiverUserIds_);
      DARABONBA_PTR_FROM_JSON(senderUserId, senderUserId_);
    };
    GrantHonorRequest() = default ;
    GrantHonorRequest(const GrantHonorRequest &) = default ;
    GrantHonorRequest(GrantHonorRequest &&) = default ;
    GrantHonorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantHonorRequest() = default ;
    GrantHonorRequest& operator=(const GrantHonorRequest &) = default ;
    GrantHonorRequest& operator=(GrantHonorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->expirationTime_ != nullptr && this->grantReason_ != nullptr && this->granterName_ != nullptr && this->honorId_ != nullptr && this->noticeAnnouncer_ != nullptr
        && this->noticeSingle_ != nullptr && this->openConversationIds_ != nullptr && this->orgId_ != nullptr && this->receiverUserIds_ != nullptr && this->senderUserId_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GrantHonorRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GrantHonorRequestTenantContext) };
    inline GrantHonorRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GrantHonorRequestTenantContext) };
    inline GrantHonorRequest& setTenantContext(const GrantHonorRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GrantHonorRequest& setTenantContext(GrantHonorRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline GrantHonorRequest& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // grantReason Field Functions 
    bool hasGrantReason() const { return this->grantReason_ != nullptr;};
    void deleteGrantReason() { this->grantReason_ = nullptr;};
    inline string grantReason() const { DARABONBA_PTR_GET_DEFAULT(grantReason_, "") };
    inline GrantHonorRequest& setGrantReason(string grantReason) { DARABONBA_PTR_SET_VALUE(grantReason_, grantReason) };


    // granterName Field Functions 
    bool hasGranterName() const { return this->granterName_ != nullptr;};
    void deleteGranterName() { this->granterName_ = nullptr;};
    inline string granterName() const { DARABONBA_PTR_GET_DEFAULT(granterName_, "") };
    inline GrantHonorRequest& setGranterName(string granterName) { DARABONBA_PTR_SET_VALUE(granterName_, granterName) };


    // honorId Field Functions 
    bool hasHonorId() const { return this->honorId_ != nullptr;};
    void deleteHonorId() { this->honorId_ = nullptr;};
    inline string honorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, "") };
    inline GrantHonorRequest& setHonorId(string honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


    // noticeAnnouncer Field Functions 
    bool hasNoticeAnnouncer() const { return this->noticeAnnouncer_ != nullptr;};
    void deleteNoticeAnnouncer() { this->noticeAnnouncer_ = nullptr;};
    inline bool noticeAnnouncer() const { DARABONBA_PTR_GET_DEFAULT(noticeAnnouncer_, false) };
    inline GrantHonorRequest& setNoticeAnnouncer(bool noticeAnnouncer) { DARABONBA_PTR_SET_VALUE(noticeAnnouncer_, noticeAnnouncer) };


    // noticeSingle Field Functions 
    bool hasNoticeSingle() const { return this->noticeSingle_ != nullptr;};
    void deleteNoticeSingle() { this->noticeSingle_ = nullptr;};
    inline bool noticeSingle() const { DARABONBA_PTR_GET_DEFAULT(noticeSingle_, false) };
    inline GrantHonorRequest& setNoticeSingle(bool noticeSingle) { DARABONBA_PTR_SET_VALUE(noticeSingle_, noticeSingle) };


    // openConversationIds Field Functions 
    bool hasOpenConversationIds() const { return this->openConversationIds_ != nullptr;};
    void deleteOpenConversationIds() { this->openConversationIds_ = nullptr;};
    inline const vector<string> & openConversationIds() const { DARABONBA_PTR_GET_CONST(openConversationIds_, vector<string>) };
    inline vector<string> openConversationIds() { DARABONBA_PTR_GET(openConversationIds_, vector<string>) };
    inline GrantHonorRequest& setOpenConversationIds(const vector<string> & openConversationIds) { DARABONBA_PTR_SET_VALUE(openConversationIds_, openConversationIds) };
    inline GrantHonorRequest& setOpenConversationIds(vector<string> && openConversationIds) { DARABONBA_PTR_SET_RVALUE(openConversationIds_, openConversationIds) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline GrantHonorRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // receiverUserIds Field Functions 
    bool hasReceiverUserIds() const { return this->receiverUserIds_ != nullptr;};
    void deleteReceiverUserIds() { this->receiverUserIds_ = nullptr;};
    inline const vector<string> & receiverUserIds() const { DARABONBA_PTR_GET_CONST(receiverUserIds_, vector<string>) };
    inline vector<string> receiverUserIds() { DARABONBA_PTR_GET(receiverUserIds_, vector<string>) };
    inline GrantHonorRequest& setReceiverUserIds(const vector<string> & receiverUserIds) { DARABONBA_PTR_SET_VALUE(receiverUserIds_, receiverUserIds) };
    inline GrantHonorRequest& setReceiverUserIds(vector<string> && receiverUserIds) { DARABONBA_PTR_SET_RVALUE(receiverUserIds_, receiverUserIds) };


    // senderUserId Field Functions 
    bool hasSenderUserId() const { return this->senderUserId_ != nullptr;};
    void deleteSenderUserId() { this->senderUserId_ = nullptr;};
    inline string senderUserId() const { DARABONBA_PTR_GET_DEFAULT(senderUserId_, "") };
    inline GrantHonorRequest& setSenderUserId(string senderUserId) { DARABONBA_PTR_SET_VALUE(senderUserId_, senderUserId) };


  protected:
    std::shared_ptr<GrantHonorRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> grantReason_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> granterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> honorId_ = nullptr;
    std::shared_ptr<bool> noticeAnnouncer_ = nullptr;
    std::shared_ptr<bool> noticeSingle_ = nullptr;
    std::shared_ptr<vector<string>> openConversationIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> receiverUserIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> senderUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
