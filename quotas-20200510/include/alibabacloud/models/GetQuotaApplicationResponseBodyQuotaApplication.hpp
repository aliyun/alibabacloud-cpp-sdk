// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONRESPONSEBODYQUOTAAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONRESPONSEBODYQUOTAAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaApplicationResponseBodyQuotaApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaApplicationResponseBodyQuotaApplication& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetQuotaApplicationResponseBodyQuotaApplication& obj) { 
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
    GetQuotaApplicationResponseBodyQuotaApplication() = default ;
    GetQuotaApplicationResponseBodyQuotaApplication(const GetQuotaApplicationResponseBodyQuotaApplication &) = default ;
    GetQuotaApplicationResponseBodyQuotaApplication(GetQuotaApplicationResponseBodyQuotaApplication &&) = default ;
    GetQuotaApplicationResponseBodyQuotaApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaApplicationResponseBodyQuotaApplication() = default ;
    GetQuotaApplicationResponseBodyQuotaApplication& operator=(const GetQuotaApplicationResponseBodyQuotaApplication &) = default ;
    GetQuotaApplicationResponseBodyQuotaApplication& operator=(GetQuotaApplicationResponseBodyQuotaApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applyTime_ != nullptr && this->approveValue_ != nullptr && this->auditReason_ != nullptr && this->desireValue_ != nullptr && this->dimension_ != nullptr
        && this->effectiveTime_ != nullptr && this->expireTime_ != nullptr && this->noticeType_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr
        && this->quotaArn_ != nullptr && this->quotaCategory_ != nullptr && this->quotaDescription_ != nullptr && this->quotaName_ != nullptr && this->quotaUnit_ != nullptr
        && this->reason_ != nullptr && this->status_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline string applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // approveValue Field Functions 
    bool hasApproveValue() const { return this->approveValue_ != nullptr;};
    void deleteApproveValue() { this->approveValue_ = nullptr;};
    inline float approveValue() const { DARABONBA_PTR_GET_DEFAULT(approveValue_, 0.0) };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setApproveValue(float approveValue) { DARABONBA_PTR_SET_VALUE(approveValue_, approveValue) };


    // auditReason Field Functions 
    bool hasAuditReason() const { return this->auditReason_ != nullptr;};
    void deleteAuditReason() { this->auditReason_ = nullptr;};
    inline string auditReason() const { DARABONBA_PTR_GET_DEFAULT(auditReason_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setAuditReason(string auditReason) { DARABONBA_PTR_SET_VALUE(auditReason_, auditReason) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline int32_t desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0) };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setDesireValue(int32_t desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline     const Darabonba::Json & dimension() const { DARABONBA_GET(dimension_) };
    Darabonba::Json & dimension() { DARABONBA_GET(dimension_) };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setDimension(const Darabonba::Json & dimension) { DARABONBA_SET_VALUE(dimension_, dimension) };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setDimension(Darabonba::Json & dimension) { DARABONBA_SET_RVALUE(dimension_, dimension) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int64_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0L) };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setNoticeType(int64_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaArn Field Functions 
    bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
    void deleteQuotaArn() { this->quotaArn_ = nullptr;};
    inline string quotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // quotaDescription Field Functions 
    bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
    void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
    inline string quotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaUnit Field Functions 
    bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
    void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
    inline string quotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetQuotaApplicationResponseBodyQuotaApplication& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The time when the application was submitted.
    std::shared_ptr<string> applyTime_ = nullptr;
    // The approved quota value.
    std::shared_ptr<float> approveValue_ = nullptr;
    // The result of the application.
    std::shared_ptr<string> auditReason_ = nullptr;
    // The expected value of the quota.
    std::shared_ptr<int32_t> desireValue_ = nullptr;
    // The dimension.
    // 
    // Format: `{"regionId":"Region"}`.
    Darabonba::Json dimension_ = nullptr;
    // The time when the new quota value takes effect.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The time when the new quota expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The method of that is used to send alert notifications. Valid values:
    // 
    // *   0: Quota Center does not send a notification.
    // *   1: Quota Center sends an email notification.
    // *   2: Quota Center sends an SMS notification.
    std::shared_ptr<int64_t> noticeType_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the quota.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the quota.
    std::shared_ptr<string> quotaArn_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   CommonQuota: general quota.
    // *   FlowControl: API rate limit.
    // *   WhiteListLabel: whitelist quota.
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The description of the quota.
    std::shared_ptr<string> quotaDescription_ = nullptr;
    // The name of the quota.
    std::shared_ptr<string> quotaName_ = nullptr;
    // The unit of the new quota value.
    std::shared_ptr<string> quotaUnit_ = nullptr;
    // The reason for the application.
    std::shared_ptr<string> reason_ = nullptr;
    // The status of the application. Valid values:
    // 
    // *   Disagree: The application is rejected.
    // *   Agree: The application is approved.
    // *   Process: The application is being reviewed.
    // *   Cancel: The application is closed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
