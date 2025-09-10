// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODYQUOTABATCHAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODYQUOTABATCHAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUids, aliyunUids_);
      DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_TO_JSON(AuditStatusVos, auditStatusVos_);
      DARABONBA_PTR_TO_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
      DARABONBA_ANY_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUids, aliyunUids_);
      DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_FROM_JSON(AuditStatusVos, auditStatusVos_);
      DARABONBA_PTR_FROM_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
      DARABONBA_ANY_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications() = default ;
    ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications(const ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications &) = default ;
    ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications(ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications &&) = default ;
    ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications() = default ;
    ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& operator=(const ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications &) = default ;
    ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& operator=(ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUids_ != nullptr
        && this->applyTime_ != nullptr && this->auditStatusVos_ != nullptr && this->batchQuotaApplicationId_ != nullptr && this->desireValue_ != nullptr && this->dimensions_ != nullptr
        && this->effectiveTime_ != nullptr && this->expireTime_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaCategory_ != nullptr
        && this->reason_ != nullptr; };
    // aliyunUids Field Functions 
    bool hasAliyunUids() const { return this->aliyunUids_ != nullptr;};
    void deleteAliyunUids() { this->aliyunUids_ = nullptr;};
    inline const vector<string> & aliyunUids() const { DARABONBA_PTR_GET_CONST(aliyunUids_, vector<string>) };
    inline vector<string> aliyunUids() { DARABONBA_PTR_GET(aliyunUids_, vector<string>) };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setAliyunUids(const vector<string> & aliyunUids) { DARABONBA_PTR_SET_VALUE(aliyunUids_, aliyunUids) };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setAliyunUids(vector<string> && aliyunUids) { DARABONBA_PTR_SET_RVALUE(aliyunUids_, aliyunUids) };


    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline string applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // auditStatusVos Field Functions 
    bool hasAuditStatusVos() const { return this->auditStatusVos_ != nullptr;};
    void deleteAuditStatusVos() { this->auditStatusVos_ = nullptr;};
    inline const vector<Models::ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos> & auditStatusVos() const { DARABONBA_PTR_GET_CONST(auditStatusVos_, vector<Models::ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos>) };
    inline vector<Models::ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos> auditStatusVos() { DARABONBA_PTR_GET(auditStatusVos_, vector<Models::ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos>) };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setAuditStatusVos(const vector<Models::ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos> & auditStatusVos) { DARABONBA_PTR_SET_VALUE(auditStatusVos_, auditStatusVos) };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setAuditStatusVos(vector<Models::ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos> && auditStatusVos) { DARABONBA_PTR_SET_RVALUE(auditStatusVos_, auditStatusVos) };


    // batchQuotaApplicationId Field Functions 
    bool hasBatchQuotaApplicationId() const { return this->batchQuotaApplicationId_ != nullptr;};
    void deleteBatchQuotaApplicationId() { this->batchQuotaApplicationId_ = nullptr;};
    inline string batchQuotaApplicationId() const { DARABONBA_PTR_GET_DEFAULT(batchQuotaApplicationId_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setBatchQuotaApplicationId(string batchQuotaApplicationId) { DARABONBA_PTR_SET_VALUE(batchQuotaApplicationId_, batchQuotaApplicationId) };


    // desireValue Field Functions 
    bool hasDesireValue() const { return this->desireValue_ != nullptr;};
    void deleteDesireValue() { this->desireValue_ = nullptr;};
    inline double desireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setDesireValue(double desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline     const Darabonba::Json & dimensions() const { DARABONBA_GET(dimensions_) };
    Darabonba::Json & dimensions() { DARABONBA_GET(dimensions_) };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setDimensions(Darabonba::Json & dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The Alibaba Cloud accounts that correspond to the resource directory members for which the quotas are applied.
    std::shared_ptr<vector<string>> aliyunUids_ = nullptr;
    // The time when the quota increase application was submitted. The value is displayed in UTC.
    std::shared_ptr<string> applyTime_ = nullptr;
    // The number of applications in different approval states.
    std::shared_ptr<vector<Models::ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos>> auditStatusVos_ = nullptr;
    // The ID of the quota application batch.
    std::shared_ptr<string> batchQuotaApplicationId_ = nullptr;
    // The requested value of the quota.
    std::shared_ptr<double> desireValue_ = nullptr;
    // The quota dimensions.
    // 
    // Format example: {"regionId":"cn-hangzhou"}.
    Darabonba::Json dimensions_ = nullptr;
    // The start time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The end time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   CommonQuota: general quota
    // *   FlowControl: API rate limit
    // *   WhiteListLabel: privilege
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The reason for the quota increase application.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
