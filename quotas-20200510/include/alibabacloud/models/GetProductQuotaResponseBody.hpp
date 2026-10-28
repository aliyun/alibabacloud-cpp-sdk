// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProductQuotaResponseBody() = default ;
    GetProductQuotaResponseBody(const GetProductQuotaResponseBody &) = default ;
    GetProductQuotaResponseBody(GetProductQuotaResponseBody &&) = default ;
    GetProductQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaResponseBody() = default ;
    GetProductQuotaResponseBody& operator=(const GetProductQuotaResponseBody &) = default ;
    GetProductQuotaResponseBody& operator=(GetProductQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
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
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageMetric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageMetric& obj) { 
          DARABONBA_PTR_TO_JSON(MetricDimensions, metricDimensions_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(MetricNamespace, metricNamespace_);
        };
        friend void from_json(const Darabonba::Json& j, UsageMetric& obj) { 
          DARABONBA_PTR_FROM_JSON(MetricDimensions, metricDimensions_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(MetricNamespace, metricNamespace_);
        };
        UsageMetric() = default ;
        UsageMetric(const UsageMetric &) = default ;
        UsageMetric(UsageMetric &&) = default ;
        UsageMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageMetric() = default ;
        UsageMetric& operator=(const UsageMetric &) = default ;
        UsageMetric& operator=(UsageMetric &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->metricDimensions_ == nullptr
        && this->metricName_ == nullptr && this->metricNamespace_ == nullptr; };
        // metricDimensions Field Functions 
        bool hasMetricDimensions() const { return this->metricDimensions_ != nullptr;};
        void deleteMetricDimensions() { this->metricDimensions_ = nullptr;};
        inline const map<string, string> & getMetricDimensions() const { DARABONBA_PTR_GET_CONST(metricDimensions_, map<string, string>) };
        inline map<string, string> getMetricDimensions() { DARABONBA_PTR_GET(metricDimensions_, map<string, string>) };
        inline UsageMetric& setMetricDimensions(const map<string, string> & metricDimensions) { DARABONBA_PTR_SET_VALUE(metricDimensions_, metricDimensions) };
        inline UsageMetric& setMetricDimensions(map<string, string> && metricDimensions) { DARABONBA_PTR_SET_RVALUE(metricDimensions_, metricDimensions) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline UsageMetric& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // metricNamespace Field Functions 
        bool hasMetricNamespace() const { return this->metricNamespace_ != nullptr;};
        void deleteMetricNamespace() { this->metricNamespace_ = nullptr;};
        inline string getMetricNamespace() const { DARABONBA_PTR_GET_DEFAULT(metricNamespace_, "") };
        inline UsageMetric& setMetricNamespace(string metricNamespace) { DARABONBA_PTR_SET_VALUE(metricNamespace_, metricNamespace) };


      protected:
        // The CloudMonitor monitoring dimensions.
        // 
        // Format: a collection of `key:value` pairs. Example:
        // `{"productCode":"***","metricKey":"***","regionId":"***","label":"***"}`.
        shared_ptr<map<string, string>> metricDimensions_ {};
        // The CloudMonitor metric name.
        shared_ptr<string> metricName_ {};
        // The CloudMonitor metric namespace.
        shared_ptr<string> metricNamespace_ {};
      };

      class QuotaItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuotaItems& obj) { 
          DARABONBA_PTR_TO_JSON(Quota, quota_);
          DARABONBA_PTR_TO_JSON(QuotaUnit, quotaUnit_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, QuotaItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Quota, quota_);
          DARABONBA_PTR_FROM_JSON(QuotaUnit, quotaUnit_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
        };
        QuotaItems() = default ;
        QuotaItems(const QuotaItems &) = default ;
        QuotaItems(QuotaItems &&) = default ;
        QuotaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuotaItems() = default ;
        QuotaItems& operator=(const QuotaItems &) = default ;
        QuotaItems& operator=(QuotaItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quota_ == nullptr
        && this->quotaUnit_ == nullptr && this->type_ == nullptr && this->usage_ == nullptr; };
        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline string getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
        inline QuotaItems& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


        // quotaUnit Field Functions 
        bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
        void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
        inline string getQuotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
        inline QuotaItems& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline QuotaItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline QuotaItems& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        // The quota value.
        shared_ptr<string> quota_ {};
        // The quota unit.
        // 
        // > The unit varies for each quota. For example, the unit of the q_cbdch3 quota (maximum number of clusters) for Container Service for Kubernetes is Cluster, and the unit of the q_security-groups quota (maximum number of security groups) for Elastic Compute Service servers is count.
        shared_ptr<string> quotaUnit_ {};
        // The quota item type. Valid values:
        // 
        // - BaseQuota: Base quota.
        // 
        // - ReservedQuota: Reserved quota.
        shared_ptr<string> type_ {};
        // The quota usage.
        shared_ptr<string> usage_ {};
      };

      class Period : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Period& obj) { 
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(PeriodValue, periodValue_);
        };
        friend void from_json(const Darabonba::Json& j, Period& obj) { 
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(PeriodValue, periodValue_);
        };
        Period() = default ;
        Period(const Period &) = default ;
        Period(Period &&) = default ;
        Period(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Period() = default ;
        Period& operator=(const Period &) = default ;
        Period& operator=(Period &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->periodUnit_ == nullptr
        && this->periodValue_ == nullptr; };
        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline Period& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // periodValue Field Functions 
        bool hasPeriodValue() const { return this->periodValue_ != nullptr;};
        void deletePeriodValue() { this->periodValue_ = nullptr;};
        inline int32_t getPeriodValue() const { DARABONBA_PTR_GET_DEFAULT(periodValue_, 0) };
        inline Period& setPeriodValue(int32_t periodValue) { DARABONBA_PTR_SET_VALUE(periodValue_, periodValue) };


      protected:
        // The unit of the quota period. Valid values:
        // 
        // - second: Seconds.
        // 
        // - minute: Minutes.
        // 
        // - hour: Hours.
        // 
        // - day: Days.
        // 
        // - week: Weeks.
        shared_ptr<string> periodUnit_ {};
        // The value of the quota period.
        shared_ptr<int32_t> periodValue_ {};
      };

      virtual bool empty() const override { return this->adjustable_ == nullptr
        && this->applicableRange_ == nullptr && this->applicableType_ == nullptr && this->applyReasonTips_ == nullptr && this->consumable_ == nullptr && this->dimensions_ == nullptr
        && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->globalQuota_ == nullptr && this->period_ == nullptr && this->productCode_ == nullptr
        && this->quotaActionCode_ == nullptr && this->quotaArn_ == nullptr && this->quotaCategory_ == nullptr && this->quotaDescription_ == nullptr && this->quotaItems_ == nullptr
        && this->quotaName_ == nullptr && this->quotaType_ == nullptr && this->quotaUnit_ == nullptr && this->supportedRange_ == nullptr && this->totalQuota_ == nullptr
        && this->totalUsage_ == nullptr && this->unadjustableDetail_ == nullptr && this->usageMetric_ == nullptr; };
      // adjustable Field Functions 
      bool hasAdjustable() const { return this->adjustable_ != nullptr;};
      void deleteAdjustable() { this->adjustable_ = nullptr;};
      inline bool getAdjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, false) };
      inline Quota& setAdjustable(bool adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


      // applicableRange Field Functions 
      bool hasApplicableRange() const { return this->applicableRange_ != nullptr;};
      void deleteApplicableRange() { this->applicableRange_ = nullptr;};
      inline const vector<float> & getApplicableRange() const { DARABONBA_PTR_GET_CONST(applicableRange_, vector<float>) };
      inline vector<float> getApplicableRange() { DARABONBA_PTR_GET(applicableRange_, vector<float>) };
      inline Quota& setApplicableRange(const vector<float> & applicableRange) { DARABONBA_PTR_SET_VALUE(applicableRange_, applicableRange) };
      inline Quota& setApplicableRange(vector<float> && applicableRange) { DARABONBA_PTR_SET_RVALUE(applicableRange_, applicableRange) };


      // applicableType Field Functions 
      bool hasApplicableType() const { return this->applicableType_ != nullptr;};
      void deleteApplicableType() { this->applicableType_ = nullptr;};
      inline string getApplicableType() const { DARABONBA_PTR_GET_DEFAULT(applicableType_, "") };
      inline Quota& setApplicableType(string applicableType) { DARABONBA_PTR_SET_VALUE(applicableType_, applicableType) };


      // applyReasonTips Field Functions 
      bool hasApplyReasonTips() const { return this->applyReasonTips_ != nullptr;};
      void deleteApplyReasonTips() { this->applyReasonTips_ = nullptr;};
      inline string getApplyReasonTips() const { DARABONBA_PTR_GET_DEFAULT(applyReasonTips_, "") };
      inline Quota& setApplyReasonTips(string applyReasonTips) { DARABONBA_PTR_SET_VALUE(applyReasonTips_, applyReasonTips) };


      // consumable Field Functions 
      bool hasConsumable() const { return this->consumable_ != nullptr;};
      void deleteConsumable() { this->consumable_ = nullptr;};
      inline bool getConsumable() const { DARABONBA_PTR_GET_DEFAULT(consumable_, false) };
      inline Quota& setConsumable(bool consumable) { DARABONBA_PTR_SET_VALUE(consumable_, consumable) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline       const Darabonba::Json & getDimensions() const { DARABONBA_GET(dimensions_) };
      Darabonba::Json & getDimensions() { DARABONBA_GET(dimensions_) };
      inline Quota& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
      inline Quota& setDimensions(Darabonba::Json && dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline Quota& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Quota& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // globalQuota Field Functions 
      bool hasGlobalQuota() const { return this->globalQuota_ != nullptr;};
      void deleteGlobalQuota() { this->globalQuota_ = nullptr;};
      inline bool getGlobalQuota() const { DARABONBA_PTR_GET_DEFAULT(globalQuota_, false) };
      inline Quota& setGlobalQuota(bool globalQuota) { DARABONBA_PTR_SET_VALUE(globalQuota_, globalQuota) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline const Quota::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, Quota::Period) };
      inline Quota::Period getPeriod() { DARABONBA_PTR_GET(period_, Quota::Period) };
      inline Quota& setPeriod(const Quota::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
      inline Quota& setPeriod(Quota::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Quota& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline Quota& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaArn Field Functions 
      bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
      void deleteQuotaArn() { this->quotaArn_ = nullptr;};
      inline string getQuotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
      inline Quota& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


      // quotaCategory Field Functions 
      bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
      void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
      inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
      inline Quota& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


      // quotaDescription Field Functions 
      bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
      void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
      inline string getQuotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
      inline Quota& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


      // quotaItems Field Functions 
      bool hasQuotaItems() const { return this->quotaItems_ != nullptr;};
      void deleteQuotaItems() { this->quotaItems_ = nullptr;};
      inline const vector<Quota::QuotaItems> & getQuotaItems() const { DARABONBA_PTR_GET_CONST(quotaItems_, vector<Quota::QuotaItems>) };
      inline vector<Quota::QuotaItems> getQuotaItems() { DARABONBA_PTR_GET(quotaItems_, vector<Quota::QuotaItems>) };
      inline Quota& setQuotaItems(const vector<Quota::QuotaItems> & quotaItems) { DARABONBA_PTR_SET_VALUE(quotaItems_, quotaItems) };
      inline Quota& setQuotaItems(vector<Quota::QuotaItems> && quotaItems) { DARABONBA_PTR_SET_RVALUE(quotaItems_, quotaItems) };


      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline Quota& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // quotaType Field Functions 
      bool hasQuotaType() const { return this->quotaType_ != nullptr;};
      void deleteQuotaType() { this->quotaType_ = nullptr;};
      inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
      inline Quota& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


      // quotaUnit Field Functions 
      bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
      void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
      inline string getQuotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
      inline Quota& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


      // supportedRange Field Functions 
      bool hasSupportedRange() const { return this->supportedRange_ != nullptr;};
      void deleteSupportedRange() { this->supportedRange_ = nullptr;};
      inline const vector<float> & getSupportedRange() const { DARABONBA_PTR_GET_CONST(supportedRange_, vector<float>) };
      inline vector<float> getSupportedRange() { DARABONBA_PTR_GET(supportedRange_, vector<float>) };
      inline Quota& setSupportedRange(const vector<float> & supportedRange) { DARABONBA_PTR_SET_VALUE(supportedRange_, supportedRange) };
      inline Quota& setSupportedRange(vector<float> && supportedRange) { DARABONBA_PTR_SET_RVALUE(supportedRange_, supportedRange) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline float getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0.0) };
      inline Quota& setTotalQuota(float totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // totalUsage Field Functions 
      bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
      void deleteTotalUsage() { this->totalUsage_ = nullptr;};
      inline float getTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0.0) };
      inline Quota& setTotalUsage(float totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


      // unadjustableDetail Field Functions 
      bool hasUnadjustableDetail() const { return this->unadjustableDetail_ != nullptr;};
      void deleteUnadjustableDetail() { this->unadjustableDetail_ = nullptr;};
      inline string getUnadjustableDetail() const { DARABONBA_PTR_GET_DEFAULT(unadjustableDetail_, "") };
      inline Quota& setUnadjustableDetail(string unadjustableDetail) { DARABONBA_PTR_SET_VALUE(unadjustableDetail_, unadjustableDetail) };


      // usageMetric Field Functions 
      bool hasUsageMetric() const { return this->usageMetric_ != nullptr;};
      void deleteUsageMetric() { this->usageMetric_ = nullptr;};
      inline const Quota::UsageMetric & getUsageMetric() const { DARABONBA_PTR_GET_CONST(usageMetric_, Quota::UsageMetric) };
      inline Quota::UsageMetric getUsageMetric() { DARABONBA_PTR_GET(usageMetric_, Quota::UsageMetric) };
      inline Quota& setUsageMetric(const Quota::UsageMetric & usageMetric) { DARABONBA_PTR_SET_VALUE(usageMetric_, usageMetric) };
      inline Quota& setUsageMetric(Quota::UsageMetric && usageMetric) { DARABONBA_PTR_SET_RVALUE(usageMetric_, usageMetric) };


    protected:
      // Indicates whether the quota is adjustable. Valid values:
      // 
      // - true: Adjustable.
      // 
      // - false: Not adjustable.
      shared_ptr<bool> adjustable_ {};
      // The applicable range for quota adjustment.
      shared_ptr<vector<float>> applicableRange_ {};
      // The type of quota adjustment. Valid values:
      // 
      // - continuous: Continuous.
      // 
      // - discontinuous: Discontinuous.
      shared_ptr<string> applicableType_ {};
      // The sample reasons for applying for a quota adjustment.
      shared_ptr<string> applyReasonTips_ {};
      // Indicates whether the used quota is displayed. Valid values:
      // 
      // - true: The used quota is displayed.
      // 
      // - false: The used quota is not displayed.
      shared_ptr<bool> consumable_ {};
      // The quota dimensions. Format: `{"regionId":"region"}`.
      Darabonba::Json dimensions_ {};
      // The UTC time when the quota takes effect.
      shared_ptr<string> effectiveTime_ {};
      // The UTC time when the quota expires.
      shared_ptr<string> expireTime_ {};
      // Indicates whether the quota is a global quota. Valid values:
      // - true: The quota item is shared across all regions.
      // - false: The quota item is independent for each region.
      shared_ptr<bool> globalQuota_ {};
      // The quota period.
      shared_ptr<Quota::Period> period_ {};
      // The abbreviated name of the cloud service.
      shared_ptr<string> productCode_ {};
      // The quota ID.
      shared_ptr<string> quotaActionCode_ {};
      // The ARN of the quota.
      shared_ptr<string> quotaArn_ {};
      // The quota category. Valid values:
      // - CommonQuota: General quota.
      // 
      // - FlowControl: API rate limit.
      // 
      // - WhiteListLabel: Privilege.
      shared_ptr<string> quotaCategory_ {};
      // The quota description.
      shared_ptr<string> quotaDescription_ {};
      // The quota details.
      shared_ptr<vector<Quota::QuotaItems>> quotaItems_ {};
      // The quota name.
      shared_ptr<string> quotaName_ {};
      // The quota type. Valid values:
      // 
      // - privilege: Privilege.
      // 
      // - normal: Normal.
      shared_ptr<string> quotaType_ {};
      // The quota unit.
      // 
      // > The unit varies for each quota. For example, the unit of the q_cbdch3 quota (maximum number of clusters) for Container Service for Kubernetes is Cluster, and the unit of the q_security-groups quota (maximum number of security groups) for Elastic Compute Service servers is count.
      shared_ptr<string> quotaUnit_ {};
      // The supported range of quota values for the current quota item, which can be used as a reference when configuring a quota template.
      shared_ptr<vector<float>> supportedRange_ {};
      // The quota value.
      shared_ptr<float> totalQuota_ {};
      // The quota usage.
      shared_ptr<float> totalUsage_ {};
      // The reason why the quota cannot be adjusted. Valid values:
      // 
      // - nonactivated: The service is not activated.
      // 
      // - applicationProcess: The quota application is being processed.
      // 
      // - limitReached: The quota limit is reached.
      // 
      // - supportTicketRequired: A ticket must be submitted for the application.
      shared_ptr<string> unadjustableDetail_ {};
      // The monitoring information of the quota usage in CloudMonitor.
      // 
      // > An empty value indicates that no monitoring data is available for this quota in CloudMonitor.
      shared_ptr<Quota::UsageMetric> usageMetric_ {};
    };

    virtual bool empty() const override { return this->quota_ == nullptr
        && this->requestId_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const GetProductQuotaResponseBody::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, GetProductQuotaResponseBody::Quota) };
    inline GetProductQuotaResponseBody::Quota getQuota() { DARABONBA_PTR_GET(quota_, GetProductQuotaResponseBody::Quota) };
    inline GetProductQuotaResponseBody& setQuota(const GetProductQuotaResponseBody::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline GetProductQuotaResponseBody& setQuota(GetProductQuotaResponseBody::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The quota details.
    shared_ptr<GetProductQuotaResponseBody::Quota> quota_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
