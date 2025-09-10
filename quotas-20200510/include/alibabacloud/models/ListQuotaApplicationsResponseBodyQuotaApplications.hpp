// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSRESPONSEBODYQUOTAAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSRESPONSEBODYQUOTAAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationsResponseBodyQuotaApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsResponseBodyQuotaApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_TO_JSON(ApproveValue, approveValue_);
      DARABONBA_PTR_TO_JSON(AuditReason, auditReason_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
      DARABONBA_ANY_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
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
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsResponseBodyQuotaApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_FROM_JSON(ApproveValue, approveValue_);
      DARABONBA_PTR_FROM_JSON(AuditReason, auditReason_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
      DARABONBA_ANY_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
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
    ListQuotaApplicationsResponseBodyQuotaApplications() = default ;
    ListQuotaApplicationsResponseBodyQuotaApplications(const ListQuotaApplicationsResponseBodyQuotaApplications &) = default ;
    ListQuotaApplicationsResponseBodyQuotaApplications(ListQuotaApplicationsResponseBodyQuotaApplications &&) = default ;
    ListQuotaApplicationsResponseBodyQuotaApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsResponseBodyQuotaApplications() = default ;
    ListQuotaApplicationsResponseBodyQuotaApplications& operator=(const ListQuotaApplicationsResponseBodyQuotaApplications &) = default ;
    ListQuotaApplicationsResponseBodyQuotaApplications& operator=(ListQuotaApplicationsResponseBodyQuotaApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applyTime_ != nullptr && this->approveValue_ != nullptr && this->auditReason_ != nullptr && this->comment_ != nullptr && this->desireValue_ != nullptr
        && this->dimension_ != nullptr && this->effectiveTime_ != nullptr && this->expireTime_ != nullptr && this->noticeType_ != nullptr && this->period_ != nullptr
        && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaArn_ != nullptr && this->quotaCategory_ != nullptr && this->quotaDescription_ != nullptr
        && this->quotaName_ != nullptr && this->quotaUnit_ != nullptr && this->reason_ != nullptr && this->status_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline string applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // approveValue Field Functions 
    bool hasApproveValue() const { return this->approveValue_ != nullptr;};
    void deleteApproveValue() { this->approveValue_ = nullptr;};
    inline float approveValue() const { DARABONBA_PTR_GET_DEFAULT(approveValue_, 0.0) };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setApproveValue(float approveValue) { DARABONBA_PTR_SET_VALUE(approveValue_, approveValue) };


    // auditReason Field Functions 
    bool hasAuditReason() const { return this->auditReason_ != nullptr;};
    void deleteAuditReason() { this->auditReason_ = nullptr;};
    inline string auditReason() const { DARABONBA_PTR_GET_DEFAULT(auditReason_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setAuditReason(string auditReason) { DARABONBA_PTR_SET_VALUE(auditReason_, auditReason) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline float desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline     const Darabonba::Json & dimension() const { DARABONBA_GET(dimension_) };
    Darabonba::Json & dimension() { DARABONBA_GET(dimension_) };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setDimension(const Darabonba::Json & dimension) { DARABONBA_SET_VALUE(dimension_, dimension) };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setDimension(Darabonba::Json & dimension) { DARABONBA_SET_RVALUE(dimension_, dimension) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int32_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const Models::ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod & period() const { DARABONBA_PTR_GET_CONST(period_, Models::ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod) };
    inline Models::ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod period() { DARABONBA_PTR_GET(period_, Models::ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod) };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setPeriod(const Models::ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setPeriod(Models::ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaArn Field Functions 
    bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
    void deleteQuotaArn() { this->quotaArn_ = nullptr;};
    inline string quotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // quotaDescription Field Functions 
    bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
    void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
    inline string quotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaUnit Field Functions 
    bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
    void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
    inline string quotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListQuotaApplicationsResponseBodyQuotaApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The time when the application was submitted.
    std::shared_ptr<string> applyTime_ = nullptr;
    // The quota value that is approved.
    std::shared_ptr<float> approveValue_ = nullptr;
    // The result of the application.
    std::shared_ptr<string> auditReason_ = nullptr;
    // The remarks of the application.
    std::shared_ptr<string> comment_ = nullptr;
    // The quota value that is approved.
    std::shared_ptr<float> desireValue_ = nullptr;
    // The dimension of the application.
    Darabonba::Json dimension_ = nullptr;
    // The time when the application took effect.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The time when the application expired.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether Quota Center sends a notification about the application result. Valid values:
    // 
    // *   0: A notification about the application result is not sent.
    // *   3: A notification about the application result is sent.
    std::shared_ptr<int32_t> noticeType_ = nullptr;
    // The calculation cycle of the quota.
    std::shared_ptr<Models::ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod> period_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the quota.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the quota.
    std::shared_ptr<string> quotaArn_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   CommonQuota (default): general quota.
    // *   WhiteListLabel: whitelist quota.
    // *   FlowControl: API rate limit.
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
    // *   Cancel: The application is canceled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
