// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSDETAILFORTEMPLATERESPONSEBODYQUOTAAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSDETAILFORTEMPLATERESPONSEBODYQUOTAAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_TO_JSON(ApproveValue, approveValue_);
      DARABONBA_PTR_TO_JSON(AuditReason, auditReason_);
      DARABONBA_PTR_TO_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaArn, quotaArn_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(QuotaDescription, quotaDescription_);
      DARABONBA_PTR_TO_JSON(QuotaDimension, quotaDimension_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_FROM_JSON(ApproveValue, approveValue_);
      DARABONBA_PTR_FROM_JSON(AuditReason, auditReason_);
      DARABONBA_PTR_FROM_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnvLanguage, envLanguage_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaArn, quotaArn_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(QuotaDescription, quotaDescription_);
      DARABONBA_PTR_FROM_JSON(QuotaDimension, quotaDimension_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications() = default ;
    ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications(const ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications &) = default ;
    ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications(ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications &&) = default ;
    ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications() = default ;
    ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& operator=(const ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications &) = default ;
    ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& operator=(ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->applicationId_ != nullptr && this->applyTime_ != nullptr && this->approveValue_ != nullptr && this->auditReason_ != nullptr && this->batchQuotaApplicationId_ != nullptr
        && this->desireValue_ != nullptr && this->effectiveTime_ != nullptr && this->envLanguage_ != nullptr && this->expireTime_ != nullptr && this->noticeType_ != nullptr
        && this->period_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaArn_ != nullptr && this->quotaCategory_ != nullptr
        && this->quotaDescription_ != nullptr && this->quotaDimension_ != nullptr && this->quotaName_ != nullptr && this->quotaUnit_ != nullptr && this->reason_ != nullptr
        && this->status_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline string applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // approveValue Field Functions 
    bool hasApproveValue() const { return this->approveValue_ != nullptr;};
    void deleteApproveValue() { this->approveValue_ = nullptr;};
    inline double approveValue() const { DARABONBA_PTR_GET_DEFAULT(approveValue_, 0.0) };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setApproveValue(double approveValue) { DARABONBA_PTR_SET_VALUE(approveValue_, approveValue) };


    // auditReason Field Functions 
    bool hasAuditReason() const { return this->auditReason_ != nullptr;};
    void deleteAuditReason() { this->auditReason_ = nullptr;};
    inline string auditReason() const { DARABONBA_PTR_GET_DEFAULT(auditReason_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setAuditReason(string auditReason) { DARABONBA_PTR_SET_VALUE(auditReason_, auditReason) };


    // batchQuotaApplicationId Field Functions 
    bool hasBatchQuotaApplicationId() const { return this->batchQuotaApplicationId_ != nullptr;};
    void deleteBatchQuotaApplicationId() { this->batchQuotaApplicationId_ = nullptr;};
    inline string batchQuotaApplicationId() const { DARABONBA_PTR_GET_DEFAULT(batchQuotaApplicationId_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setBatchQuotaApplicationId(string batchQuotaApplicationId) { DARABONBA_PTR_SET_VALUE(batchQuotaApplicationId_, batchQuotaApplicationId) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline double desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setDesireValue(double desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // envLanguage Field Functions 
    bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
    void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
    inline string envLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int32_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const Models::ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod & period() const { DARABONBA_PTR_GET_CONST(period_, Models::ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod) };
    inline Models::ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod period() { DARABONBA_PTR_GET(period_, Models::ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod) };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setPeriod(const Models::ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setPeriod(Models::ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaArn Field Functions 
    bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
    void deleteQuotaArn() { this->quotaArn_ = nullptr;};
    inline string quotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // quotaDescription Field Functions 
    bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
    void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
    inline string quotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


    // quotaDimension Field Functions 
    bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
    void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
    inline const map<string, string> & quotaDimension() const { DARABONBA_PTR_GET_CONST(quotaDimension_, map<string, string>) };
    inline map<string, string> quotaDimension() { DARABONBA_PTR_GET(quotaDimension_, map<string, string>) };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaDimension(const map<string, string> & quotaDimension) { DARABONBA_PTR_SET_VALUE(quotaDimension_, quotaDimension) };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaDimension(map<string, string> && quotaDimension) { DARABONBA_PTR_SET_RVALUE(quotaDimension_, quotaDimension) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaUnit Field Functions 
    bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
    void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
    inline string quotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliyunUid_ = nullptr;
    // The ID of the quota increase application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The time when the quota increase application was submitted. The value is displayed in UTC.
    std::shared_ptr<string> applyTime_ = nullptr;
    // The quota value that is approved.
    std::shared_ptr<double> approveValue_ = nullptr;
    // The approval result of the quota increase application.
    std::shared_ptr<string> auditReason_ = nullptr;
    // The ID of the quota application batch.
    std::shared_ptr<string> batchQuotaApplicationId_ = nullptr;
    // The requested value of the quota.
    std::shared_ptr<double> desireValue_ = nullptr;
    // The start time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The language of the quota alert notification. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> envLanguage_ = nullptr;
    // The end time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether Quota Center sends a notification about the application result. Valid values:
    // 
    // *   0: no
    // *   3: yes
    std::shared_ptr<int32_t> noticeType_ = nullptr;
    // The calculation cycle of the quota.
    std::shared_ptr<Models::ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod> period_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the quota.
    std::shared_ptr<string> quotaArn_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   CommonQuota (default): general quota
    // *   WhiteListLabel: privilege
    // *   FlowControl: API rate limit
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The description of the quota.
    std::shared_ptr<string> quotaDescription_ = nullptr;
    // The quota dimensions.
    std::shared_ptr<map<string, string>> quotaDimension_ = nullptr;
    // The quota name.
    std::shared_ptr<string> quotaName_ = nullptr;
    // The unit of the quota.
    std::shared_ptr<string> quotaUnit_ = nullptr;
    // The reason for the quota increase application.
    std::shared_ptr<string> reason_ = nullptr;
    // The approval status of the quota increase application. Valid values:
    // 
    // *   Disagree: The application is rejected.
    // *   Agree: The application is approved.
    // *   Process: The application is pending approval.
    // *   Cancel: The application is canceled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
