// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaApplication, quotaApplication_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaApplication, quotaApplication_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetQuotaApplicationResponseBody() = default ;
    GetQuotaApplicationResponseBody(const GetQuotaApplicationResponseBody &) = default ;
    GetQuotaApplicationResponseBody(GetQuotaApplicationResponseBody &&) = default ;
    GetQuotaApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaApplicationResponseBody() = default ;
    GetQuotaApplicationResponseBody& operator=(const GetQuotaApplicationResponseBody &) = default ;
    GetQuotaApplicationResponseBody& operator=(GetQuotaApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaApplication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaApplication& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_TO_JSON(ApproveValue, approveValue_);
        DARABONBA_PTR_TO_JSON(AuditReason, auditReason_);
        DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
        DARABONBA_ANY_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_TO_JSON(QuotaArn, quotaArn_);
        DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
        DARABONBA_PTR_TO_JSON(QuotaDescription, quotaDescription_);
        DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_TO_JSON(QuotaUnit, quotaUnit_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaApplication& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_FROM_JSON(ApproveValue, approveValue_);
        DARABONBA_PTR_FROM_JSON(AuditReason, auditReason_);
        DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
        DARABONBA_ANY_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_FROM_JSON(QuotaArn, quotaArn_);
        DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
        DARABONBA_PTR_FROM_JSON(QuotaDescription, quotaDescription_);
        DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_FROM_JSON(QuotaUnit, quotaUnit_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      QuotaApplication() = default ;
      QuotaApplication(const QuotaApplication &) = default ;
      QuotaApplication(QuotaApplication &&) = default ;
      QuotaApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaApplication() = default ;
      QuotaApplication& operator=(const QuotaApplication &) = default ;
      QuotaApplication& operator=(QuotaApplication &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applyTime_ == nullptr && this->approveValue_ == nullptr && this->auditReason_ == nullptr && this->desireValue_ == nullptr && this->dimension_ == nullptr
        && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->noticeType_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr
        && this->quotaArn_ == nullptr && this->quotaCategory_ == nullptr && this->quotaDescription_ == nullptr && this->quotaName_ == nullptr && this->quotaUnit_ == nullptr
        && this->reason_ == nullptr && this->status_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline QuotaApplication& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
      inline QuotaApplication& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // approveValue Field Functions 
      bool hasApproveValue() const { return this->approveValue_ != nullptr;};
      void deleteApproveValue() { this->approveValue_ = nullptr;};
      inline float getApproveValue() const { DARABONBA_PTR_GET_DEFAULT(approveValue_, 0.0) };
      inline QuotaApplication& setApproveValue(float approveValue) { DARABONBA_PTR_SET_VALUE(approveValue_, approveValue) };


      // auditReason Field Functions 
      bool hasAuditReason() const { return this->auditReason_ != nullptr;};
      void deleteAuditReason() { this->auditReason_ = nullptr;};
      inline string getAuditReason() const { DARABONBA_PTR_GET_DEFAULT(auditReason_, "") };
      inline QuotaApplication& setAuditReason(string auditReason) { DARABONBA_PTR_SET_VALUE(auditReason_, auditReason) };


      // desireValue Field Functions 
      bool hasDesireValue() const { return this->desireValue_ != nullptr;};
      void deleteDesireValue() { this->desireValue_ = nullptr;};
      inline int32_t getDesireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0) };
      inline QuotaApplication& setDesireValue(int32_t desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline       const Darabonba::Json & getDimension() const { DARABONBA_GET(dimension_) };
      Darabonba::Json & getDimension() { DARABONBA_GET(dimension_) };
      inline QuotaApplication& setDimension(const Darabonba::Json & dimension) { DARABONBA_SET_VALUE(dimension_, dimension) };
      inline QuotaApplication& setDimension(Darabonba::Json && dimension) { DARABONBA_SET_RVALUE(dimension_, dimension) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline QuotaApplication& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline QuotaApplication& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // noticeType Field Functions 
      bool hasNoticeType() const { return this->noticeType_ != nullptr;};
      void deleteNoticeType() { this->noticeType_ = nullptr;};
      inline int64_t getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0L) };
      inline QuotaApplication& setNoticeType(int64_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline QuotaApplication& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline QuotaApplication& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaArn Field Functions 
      bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
      void deleteQuotaArn() { this->quotaArn_ = nullptr;};
      inline string getQuotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
      inline QuotaApplication& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


      // quotaCategory Field Functions 
      bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
      void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
      inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
      inline QuotaApplication& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


      // quotaDescription Field Functions 
      bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
      void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
      inline string getQuotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
      inline QuotaApplication& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline QuotaApplication& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // quotaUnit Field Functions 
      bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
      void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
      inline string getQuotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
      inline QuotaApplication& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline QuotaApplication& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QuotaApplication& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the quota increase application.
      shared_ptr<string> applicationId_ {};
      // The time when the quota increase application was submitted.
      shared_ptr<string> applyTime_ {};
      // The approved quota value.
      shared_ptr<float> approveValue_ {};
      // The review comments for the quota increase application.
      shared_ptr<string> auditReason_ {};
      // The requested quota value.
      shared_ptr<int32_t> desireValue_ {};
      // The quota dimension.
      // 
      // Format: `{"regionId":"region"}`.
      Darabonba::Json dimension_ {};
      // The effective period of the quota.
      shared_ptr<string> effectiveTime_ {};
      // The time when the quota expires.
      shared_ptr<string> expireTime_ {};
      // The notification type. Valid values:
      // 
      // - 0: no notification
      // - 1: email notification
      // - 2: SMS notification
      shared_ptr<int64_t> noticeType_ {};
      // The abbreviation of the cloud service name.
      shared_ptr<string> productCode_ {};
      // The quota ID.
      shared_ptr<string> quotaActionCode_ {};
      // The ARN of the quota.
      shared_ptr<string> quotaArn_ {};
      // The quota category. Valid values:
      // - CommonQuota: general quota
      // - FlowControl: API rate limit
      // - WhiteListLabel: privilege
      shared_ptr<string> quotaCategory_ {};
      // The quota description.
      shared_ptr<string> quotaDescription_ {};
      // The quota name.
      shared_ptr<string> quotaName_ {};
      // The quota unit.
      shared_ptr<string> quotaUnit_ {};
      // The reason for the quota increase application.
      shared_ptr<string> reason_ {};
      // The approval status of the quota increase application. Valid values:
      // 
      // - Disagree: Rejected.
      // 
      // - Agree: Approved.
      // 
      // - Process: Under review.
      // 
      // - Cancel: Closed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->quotaApplication_ == nullptr
        && this->requestId_ == nullptr; };
    // quotaApplication Field Functions 
    bool hasQuotaApplication() const { return this->quotaApplication_ != nullptr;};
    void deleteQuotaApplication() { this->quotaApplication_ = nullptr;};
    inline const GetQuotaApplicationResponseBody::QuotaApplication & getQuotaApplication() const { DARABONBA_PTR_GET_CONST(quotaApplication_, GetQuotaApplicationResponseBody::QuotaApplication) };
    inline GetQuotaApplicationResponseBody::QuotaApplication getQuotaApplication() { DARABONBA_PTR_GET(quotaApplication_, GetQuotaApplicationResponseBody::QuotaApplication) };
    inline GetQuotaApplicationResponseBody& setQuotaApplication(const GetQuotaApplicationResponseBody::QuotaApplication & quotaApplication) { DARABONBA_PTR_SET_VALUE(quotaApplication_, quotaApplication) };
    inline GetQuotaApplicationResponseBody& setQuotaApplication(GetQuotaApplicationResponseBody::QuotaApplication && quotaApplication) { DARABONBA_PTR_SET_RVALUE(quotaApplication_, quotaApplication) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the quota increase application.
    shared_ptr<GetQuotaApplicationResponseBody::QuotaApplication> quotaApplication_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
