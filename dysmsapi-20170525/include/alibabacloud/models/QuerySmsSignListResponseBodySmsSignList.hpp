// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSSIGNLISTRESPONSEBODYSMSSIGNLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSSIGNLISTRESPONSEBODYSMSSIGNLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySmsSignListResponseBodySmsSignListReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsSignListResponseBodySmsSignList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsSignListResponseBodySmsSignList& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(authorizationLetterAuditPass, authorizationLetterAuditPass_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsSignListResponseBodySmsSignList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(authorizationLetterAuditPass, authorizationLetterAuditPass_);
    };
    QuerySmsSignListResponseBodySmsSignList() = default ;
    QuerySmsSignListResponseBodySmsSignList(const QuerySmsSignListResponseBodySmsSignList &) = default ;
    QuerySmsSignListResponseBodySmsSignList(QuerySmsSignListResponseBodySmsSignList &&) = default ;
    QuerySmsSignListResponseBodySmsSignList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsSignListResponseBodySmsSignList() = default ;
    QuerySmsSignListResponseBodySmsSignList& operator=(const QuerySmsSignListResponseBodySmsSignList &) = default ;
    QuerySmsSignListResponseBodySmsSignList& operator=(QuerySmsSignListResponseBodySmsSignList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && return this->authorizationLetterId_ == nullptr && return this->businessType_ == nullptr && return this->createDate_ == nullptr && return this->orderId_ == nullptr && return this->reason_ == nullptr
        && return this->signName_ == nullptr && return this->authorizationLetterAuditPass_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline QuerySmsSignListResponseBodySmsSignList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // authorizationLetterId Field Functions 
    bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
    void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
    inline int64_t authorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
    inline QuerySmsSignListResponseBodySmsSignList& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline QuerySmsSignListResponseBodySmsSignList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QuerySmsSignListResponseBodySmsSignList& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QuerySmsSignListResponseBodySmsSignList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline const Models::QuerySmsSignListResponseBodySmsSignListReason & reason() const { DARABONBA_PTR_GET_CONST(reason_, Models::QuerySmsSignListResponseBodySmsSignListReason) };
    inline Models::QuerySmsSignListResponseBodySmsSignListReason reason() { DARABONBA_PTR_GET(reason_, Models::QuerySmsSignListResponseBodySmsSignListReason) };
    inline QuerySmsSignListResponseBodySmsSignList& setReason(const Models::QuerySmsSignListResponseBodySmsSignListReason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
    inline QuerySmsSignListResponseBodySmsSignList& setReason(Models::QuerySmsSignListResponseBodySmsSignListReason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QuerySmsSignListResponseBodySmsSignList& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // authorizationLetterAuditPass Field Functions 
    bool hasAuthorizationLetterAuditPass() const { return this->authorizationLetterAuditPass_ != nullptr;};
    void deleteAuthorizationLetterAuditPass() { this->authorizationLetterAuditPass_ = nullptr;};
    inline bool authorizationLetterAuditPass() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterAuditPass_, false) };
    inline QuerySmsSignListResponseBodySmsSignList& setAuthorizationLetterAuditPass(bool authorizationLetterAuditPass) { DARABONBA_PTR_SET_VALUE(authorizationLetterAuditPass_, authorizationLetterAuditPass) };


  protected:
    // The approval status of the signature. Valid values:
    // 
    // *   **AUDIT_STATE_INIT**: The signature is pending approval.
    // *   **AUDIT_STATE_PASS**: The signature is approved.
    // *   **AUDIT_STATE_NOT_PASS**: The signature is rejected. You can view the reason in the Reason response parameter.
    // *   **AUDIT_STATE_CANCEL**: The approval is canceled.
    std::shared_ptr<string> auditStatus_ = nullptr;
    std::shared_ptr<int64_t> authorizationLetterId_ = nullptr;
    // The type of the signature scenario. The return value ends with "type". Valid values:
    // 
    // *   Verification code type
    // *   General-purpose type
    std::shared_ptr<string> businessType_ = nullptr;
    // The time when the signature was created. Format: yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> createDate_ = nullptr;
    // The ticket ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The approval remarks.
    // 
    // *   If the value of AuditStatus is **AUDIT_STATE_PASS** or **AUDIT_STATE_INIT**, the value of Reason is No Approval Remarks.
    // *   If the value of AuditStatus is **AUDIT_STATE_NOT_PASS**, the reason why the signature is rejected is returned.
    std::shared_ptr<Models::QuerySmsSignListResponseBodySmsSignListReason> reason_ = nullptr;
    // The name of the signature.
    std::shared_ptr<string> signName_ = nullptr;
    std::shared_ptr<bool> authorizationLetterAuditPass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
