// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODYQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODYQUOTAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductQuotasResponseBodyQuotasPeriod.hpp>
#include <alibabacloud/models/ListProductQuotasResponseBodyQuotasQuotaItems.hpp>
#include <alibabacloud/models/ListProductQuotasResponseBodyQuotasUsageMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotasResponseBodyQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(Adjustable, adjustable_);
      DARABONBA_PTR_TO_JSON(ApplicableRange, applicableRange_);
      DARABONBA_PTR_TO_JSON(ApplicableType, applicableType_);
      DARABONBA_PTR_TO_JSON(ApplyReasonTips, applyReasonTips_);
      DARABONBA_PTR_TO_JSON(Consumable, consumable_);
      DARABONBA_ANY_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GlobalQuota, globalQuota_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaArn, quotaArn_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(QuotaDescription, quotaDescription_);
      DARABONBA_PTR_TO_JSON(QuotaItems, quotaItems_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_TO_JSON(SupportedRange, supportedRange_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(TotalUsage, totalUsage_);
      DARABONBA_PTR_TO_JSON(UnadjustableDetail, unadjustableDetail_);
      DARABONBA_PTR_TO_JSON(UsageMetric, usageMetric_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(Adjustable, adjustable_);
      DARABONBA_PTR_FROM_JSON(ApplicableRange, applicableRange_);
      DARABONBA_PTR_FROM_JSON(ApplicableType, applicableType_);
      DARABONBA_PTR_FROM_JSON(ApplyReasonTips, applyReasonTips_);
      DARABONBA_PTR_FROM_JSON(Consumable, consumable_);
      DARABONBA_ANY_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GlobalQuota, globalQuota_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaArn, quotaArn_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(QuotaDescription, quotaDescription_);
      DARABONBA_PTR_FROM_JSON(QuotaItems, quotaItems_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_FROM_JSON(SupportedRange, supportedRange_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(TotalUsage, totalUsage_);
      DARABONBA_PTR_FROM_JSON(UnadjustableDetail, unadjustableDetail_);
      DARABONBA_PTR_FROM_JSON(UsageMetric, usageMetric_);
    };
    ListProductQuotasResponseBodyQuotas() = default ;
    ListProductQuotasResponseBodyQuotas(const ListProductQuotasResponseBodyQuotas &) = default ;
    ListProductQuotasResponseBodyQuotas(ListProductQuotasResponseBodyQuotas &&) = default ;
    ListProductQuotasResponseBodyQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotasResponseBodyQuotas() = default ;
    ListProductQuotasResponseBodyQuotas& operator=(const ListProductQuotasResponseBodyQuotas &) = default ;
    ListProductQuotasResponseBodyQuotas& operator=(ListProductQuotasResponseBodyQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustable_ != nullptr
        && this->applicableRange_ != nullptr && this->applicableType_ != nullptr && this->applyReasonTips_ != nullptr && this->consumable_ != nullptr && this->dimensions_ != nullptr
        && this->effectiveTime_ != nullptr && this->expireTime_ != nullptr && this->globalQuota_ != nullptr && this->period_ != nullptr && this->productCode_ != nullptr
        && this->quotaActionCode_ != nullptr && this->quotaArn_ != nullptr && this->quotaCategory_ != nullptr && this->quotaDescription_ != nullptr && this->quotaItems_ != nullptr
        && this->quotaName_ != nullptr && this->quotaType_ != nullptr && this->quotaUnit_ != nullptr && this->supportedRange_ != nullptr && this->totalQuota_ != nullptr
        && this->totalUsage_ != nullptr && this->unadjustableDetail_ != nullptr && this->usageMetric_ != nullptr; };
    // adjustable Field Functions 
    bool hasAdjustable() const { return this->adjustable_ != nullptr;};
    void deleteAdjustable() { this->adjustable_ = nullptr;};
    inline bool adjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, false) };
    inline ListProductQuotasResponseBodyQuotas& setAdjustable(bool adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


    // applicableRange Field Functions 
    bool hasApplicableRange() const { return this->applicableRange_ != nullptr;};
    void deleteApplicableRange() { this->applicableRange_ = nullptr;};
    inline const vector<float> & applicableRange() const { DARABONBA_PTR_GET_CONST(applicableRange_, vector<float>) };
    inline vector<float> applicableRange() { DARABONBA_PTR_GET(applicableRange_, vector<float>) };
    inline ListProductQuotasResponseBodyQuotas& setApplicableRange(const vector<float> & applicableRange) { DARABONBA_PTR_SET_VALUE(applicableRange_, applicableRange) };
    inline ListProductQuotasResponseBodyQuotas& setApplicableRange(vector<float> && applicableRange) { DARABONBA_PTR_SET_RVALUE(applicableRange_, applicableRange) };


    // applicableType Field Functions 
    bool hasApplicableType() const { return this->applicableType_ != nullptr;};
    void deleteApplicableType() { this->applicableType_ = nullptr;};
    inline string applicableType() const { DARABONBA_PTR_GET_DEFAULT(applicableType_, "") };
    inline ListProductQuotasResponseBodyQuotas& setApplicableType(string applicableType) { DARABONBA_PTR_SET_VALUE(applicableType_, applicableType) };


    // applyReasonTips Field Functions 
    bool hasApplyReasonTips() const { return this->applyReasonTips_ != nullptr;};
    void deleteApplyReasonTips() { this->applyReasonTips_ = nullptr;};
    inline string applyReasonTips() const { DARABONBA_PTR_GET_DEFAULT(applyReasonTips_, "") };
    inline ListProductQuotasResponseBodyQuotas& setApplyReasonTips(string applyReasonTips) { DARABONBA_PTR_SET_VALUE(applyReasonTips_, applyReasonTips) };


    // consumable Field Functions 
    bool hasConsumable() const { return this->consumable_ != nullptr;};
    void deleteConsumable() { this->consumable_ = nullptr;};
    inline bool consumable() const { DARABONBA_PTR_GET_DEFAULT(consumable_, false) };
    inline ListProductQuotasResponseBodyQuotas& setConsumable(bool consumable) { DARABONBA_PTR_SET_VALUE(consumable_, consumable) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline     const Darabonba::Json & dimensions() const { DARABONBA_GET(dimensions_) };
    Darabonba::Json & dimensions() { DARABONBA_GET(dimensions_) };
    inline ListProductQuotasResponseBodyQuotas& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
    inline ListProductQuotasResponseBodyQuotas& setDimensions(Darabonba::Json & dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ListProductQuotasResponseBodyQuotas& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListProductQuotasResponseBodyQuotas& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // globalQuota Field Functions 
    bool hasGlobalQuota() const { return this->globalQuota_ != nullptr;};
    void deleteGlobalQuota() { this->globalQuota_ = nullptr;};
    inline bool globalQuota() const { DARABONBA_PTR_GET_DEFAULT(globalQuota_, false) };
    inline ListProductQuotasResponseBodyQuotas& setGlobalQuota(bool globalQuota) { DARABONBA_PTR_SET_VALUE(globalQuota_, globalQuota) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const Models::ListProductQuotasResponseBodyQuotasPeriod & period() const { DARABONBA_PTR_GET_CONST(period_, Models::ListProductQuotasResponseBodyQuotasPeriod) };
    inline Models::ListProductQuotasResponseBodyQuotasPeriod period() { DARABONBA_PTR_GET(period_, Models::ListProductQuotasResponseBodyQuotasPeriod) };
    inline ListProductQuotasResponseBodyQuotas& setPeriod(const Models::ListProductQuotasResponseBodyQuotasPeriod & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListProductQuotasResponseBodyQuotas& setPeriod(Models::ListProductQuotasResponseBodyQuotasPeriod && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductQuotasResponseBodyQuotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListProductQuotasResponseBodyQuotas& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaArn Field Functions 
    bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
    void deleteQuotaArn() { this->quotaArn_ = nullptr;};
    inline string quotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
    inline ListProductQuotasResponseBodyQuotas& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListProductQuotasResponseBodyQuotas& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // quotaDescription Field Functions 
    bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
    void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
    inline string quotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
    inline ListProductQuotasResponseBodyQuotas& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


    // quotaItems Field Functions 
    bool hasQuotaItems() const { return this->quotaItems_ != nullptr;};
    void deleteQuotaItems() { this->quotaItems_ = nullptr;};
    inline const vector<Models::ListProductQuotasResponseBodyQuotasQuotaItems> & quotaItems() const { DARABONBA_PTR_GET_CONST(quotaItems_, vector<Models::ListProductQuotasResponseBodyQuotasQuotaItems>) };
    inline vector<Models::ListProductQuotasResponseBodyQuotasQuotaItems> quotaItems() { DARABONBA_PTR_GET(quotaItems_, vector<Models::ListProductQuotasResponseBodyQuotasQuotaItems>) };
    inline ListProductQuotasResponseBodyQuotas& setQuotaItems(const vector<Models::ListProductQuotasResponseBodyQuotasQuotaItems> & quotaItems) { DARABONBA_PTR_SET_VALUE(quotaItems_, quotaItems) };
    inline ListProductQuotasResponseBodyQuotas& setQuotaItems(vector<Models::ListProductQuotasResponseBodyQuotasQuotaItems> && quotaItems) { DARABONBA_PTR_SET_RVALUE(quotaItems_, quotaItems) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListProductQuotasResponseBodyQuotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline ListProductQuotasResponseBodyQuotas& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // quotaUnit Field Functions 
    bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
    void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
    inline string quotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
    inline ListProductQuotasResponseBodyQuotas& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


    // supportedRange Field Functions 
    bool hasSupportedRange() const { return this->supportedRange_ != nullptr;};
    void deleteSupportedRange() { this->supportedRange_ = nullptr;};
    inline const vector<float> & supportedRange() const { DARABONBA_PTR_GET_CONST(supportedRange_, vector<float>) };
    inline vector<float> supportedRange() { DARABONBA_PTR_GET(supportedRange_, vector<float>) };
    inline ListProductQuotasResponseBodyQuotas& setSupportedRange(const vector<float> & supportedRange) { DARABONBA_PTR_SET_VALUE(supportedRange_, supportedRange) };
    inline ListProductQuotasResponseBodyQuotas& setSupportedRange(vector<float> && supportedRange) { DARABONBA_PTR_SET_RVALUE(supportedRange_, supportedRange) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline float totalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0.0) };
    inline ListProductQuotasResponseBodyQuotas& setTotalQuota(float totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // totalUsage Field Functions 
    bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
    void deleteTotalUsage() { this->totalUsage_ = nullptr;};
    inline float totalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0.0) };
    inline ListProductQuotasResponseBodyQuotas& setTotalUsage(float totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


    // unadjustableDetail Field Functions 
    bool hasUnadjustableDetail() const { return this->unadjustableDetail_ != nullptr;};
    void deleteUnadjustableDetail() { this->unadjustableDetail_ = nullptr;};
    inline string unadjustableDetail() const { DARABONBA_PTR_GET_DEFAULT(unadjustableDetail_, "") };
    inline ListProductQuotasResponseBodyQuotas& setUnadjustableDetail(string unadjustableDetail) { DARABONBA_PTR_SET_VALUE(unadjustableDetail_, unadjustableDetail) };


    // usageMetric Field Functions 
    bool hasUsageMetric() const { return this->usageMetric_ != nullptr;};
    void deleteUsageMetric() { this->usageMetric_ = nullptr;};
    inline const Models::ListProductQuotasResponseBodyQuotasUsageMetric & usageMetric() const { DARABONBA_PTR_GET_CONST(usageMetric_, Models::ListProductQuotasResponseBodyQuotasUsageMetric) };
    inline Models::ListProductQuotasResponseBodyQuotasUsageMetric usageMetric() { DARABONBA_PTR_GET(usageMetric_, Models::ListProductQuotasResponseBodyQuotasUsageMetric) };
    inline ListProductQuotasResponseBodyQuotas& setUsageMetric(const Models::ListProductQuotasResponseBodyQuotasUsageMetric & usageMetric) { DARABONBA_PTR_SET_VALUE(usageMetric_, usageMetric) };
    inline ListProductQuotasResponseBodyQuotas& setUsageMetric(Models::ListProductQuotasResponseBodyQuotasUsageMetric && usageMetric) { DARABONBA_PTR_SET_RVALUE(usageMetric_, usageMetric) };


  protected:
    // Indicates whether the quota is adjustable.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> adjustable_ = nullptr;
    // The range of the quota value that can be requested for the quota item.
    std::shared_ptr<vector<float>> applicableRange_ = nullptr;
    // The type of the adjustable value.
    // 
    // Valid values:
    // 
    // *   continuous
    // *   discontinuous
    std::shared_ptr<string> applicableType_ = nullptr;
    // The reason for submitting a quota increase request.
    std::shared_ptr<string> applyReasonTips_ = nullptr;
    // Indicates whether the system shows the used value of the quota.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> consumable_ = nullptr;
    // The quota dimension. Format: `{"regionId":"Region"}`.
    Darabonba::Json dimensions_ = nullptr;
    // The start time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The end time of the validity period of the quota. The value is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether the quota is a global quota.
    // 
    // Valid values:
    // 
    // *   true: The quota is shared in all regions.
    // *   false: The quota is independently used in a region.
    std::shared_ptr<bool> globalQuota_ = nullptr;
    // The calculation cycle of the quota.
    std::shared_ptr<Models::ListProductQuotasResponseBodyQuotasPeriod> period_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the quota.
    std::shared_ptr<string> quotaArn_ = nullptr;
    // The type of the quota.
    // 
    // Valid values:
    // 
    // *   FlowControl: API rate limit
    // *   WhiteListLabel: whitelist quota
    // *   CommonQuota: general quota
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The description of the quota.
    std::shared_ptr<string> quotaDescription_ = nullptr;
    // The details of the quotas.
    std::shared_ptr<vector<Models::ListProductQuotasResponseBodyQuotasQuotaItems>> quotaItems_ = nullptr;
    // The name of the quota.
    std::shared_ptr<string> quotaName_ = nullptr;
    // The type of the quota.
    // 
    // Valid values:
    // 
    // *   normal
    // *   privilege
    std::shared_ptr<string> quotaType_ = nullptr;
    // The unit of the quota.
    std::shared_ptr<string> quotaUnit_ = nullptr;
    // The range of the quota value that can be requested for the current quota item. When you configure a quota template, you can use the range as a reference.
    std::shared_ptr<vector<float>> supportedRange_ = nullptr;
    // The value of the quota.
    std::shared_ptr<float> totalQuota_ = nullptr;
    // The quota usage.
    std::shared_ptr<float> totalUsage_ = nullptr;
    // The reason why the quota is not adjustable.
    // 
    // Valid values:
    // 
    // *   limitReached: The quota limit is reached.
    // *   nonactivated: The service is not activated.
    // *   applicationProcess: The application is being processed.
    std::shared_ptr<string> unadjustableDetail_ = nullptr;
    // The monitoring information of the quota in CloudMonitor.
    // 
    // >  If this parameter is empty, no monitoring data of the quota exists in CloudMonitor.
    std::shared_ptr<Models::ListProductQuotasResponseBodyQuotasUsageMetric> usageMetric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
