// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODY_HPP_
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
  class ListProductQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductQuotasResponseBody() = default ;
    ListProductQuotasResponseBody(const ListProductQuotasResponseBody &) = default ;
    ListProductQuotasResponseBody(ListProductQuotasResponseBody &&) = default ;
    ListProductQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotasResponseBody() = default ;
    ListProductQuotasResponseBody& operator=(const ListProductQuotasResponseBody &) = default ;
    ListProductQuotasResponseBody& operator=(ListProductQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
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
      Quotas() = default ;
      Quotas(const Quotas &) = default ;
      Quotas(Quotas &&) = default ;
      Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quotas() = default ;
      Quotas& operator=(const Quotas &) = default ;
      Quotas& operator=(Quotas &&) = default ;
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
        // The name of the CloudMonitor monitoring metric.
        shared_ptr<string> metricName_ {};
        // The namespace of the CloudMonitor monitoring data.
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
        shared_ptr<string> quotaUnit_ {};
        // The quota category.
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
        // The unit of the quota calculation period.
        shared_ptr<string> periodUnit_ {};
        // The value of the quota calculation period.
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
      inline Quotas& setAdjustable(bool adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


      // applicableRange Field Functions 
      bool hasApplicableRange() const { return this->applicableRange_ != nullptr;};
      void deleteApplicableRange() { this->applicableRange_ = nullptr;};
      inline const vector<float> & getApplicableRange() const { DARABONBA_PTR_GET_CONST(applicableRange_, vector<float>) };
      inline vector<float> getApplicableRange() { DARABONBA_PTR_GET(applicableRange_, vector<float>) };
      inline Quotas& setApplicableRange(const vector<float> & applicableRange) { DARABONBA_PTR_SET_VALUE(applicableRange_, applicableRange) };
      inline Quotas& setApplicableRange(vector<float> && applicableRange) { DARABONBA_PTR_SET_RVALUE(applicableRange_, applicableRange) };


      // applicableType Field Functions 
      bool hasApplicableType() const { return this->applicableType_ != nullptr;};
      void deleteApplicableType() { this->applicableType_ = nullptr;};
      inline string getApplicableType() const { DARABONBA_PTR_GET_DEFAULT(applicableType_, "") };
      inline Quotas& setApplicableType(string applicableType) { DARABONBA_PTR_SET_VALUE(applicableType_, applicableType) };


      // applyReasonTips Field Functions 
      bool hasApplyReasonTips() const { return this->applyReasonTips_ != nullptr;};
      void deleteApplyReasonTips() { this->applyReasonTips_ = nullptr;};
      inline string getApplyReasonTips() const { DARABONBA_PTR_GET_DEFAULT(applyReasonTips_, "") };
      inline Quotas& setApplyReasonTips(string applyReasonTips) { DARABONBA_PTR_SET_VALUE(applyReasonTips_, applyReasonTips) };


      // consumable Field Functions 
      bool hasConsumable() const { return this->consumable_ != nullptr;};
      void deleteConsumable() { this->consumable_ = nullptr;};
      inline bool getConsumable() const { DARABONBA_PTR_GET_DEFAULT(consumable_, false) };
      inline Quotas& setConsumable(bool consumable) { DARABONBA_PTR_SET_VALUE(consumable_, consumable) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline       const Darabonba::Json & getDimensions() const { DARABONBA_GET(dimensions_) };
      Darabonba::Json & getDimensions() { DARABONBA_GET(dimensions_) };
      inline Quotas& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
      inline Quotas& setDimensions(Darabonba::Json && dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline Quotas& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Quotas& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // globalQuota Field Functions 
      bool hasGlobalQuota() const { return this->globalQuota_ != nullptr;};
      void deleteGlobalQuota() { this->globalQuota_ = nullptr;};
      inline bool getGlobalQuota() const { DARABONBA_PTR_GET_DEFAULT(globalQuota_, false) };
      inline Quotas& setGlobalQuota(bool globalQuota) { DARABONBA_PTR_SET_VALUE(globalQuota_, globalQuota) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline const Quotas::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, Quotas::Period) };
      inline Quotas::Period getPeriod() { DARABONBA_PTR_GET(period_, Quotas::Period) };
      inline Quotas& setPeriod(const Quotas::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
      inline Quotas& setPeriod(Quotas::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Quotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline Quotas& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaArn Field Functions 
      bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
      void deleteQuotaArn() { this->quotaArn_ = nullptr;};
      inline string getQuotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
      inline Quotas& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


      // quotaCategory Field Functions 
      bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
      void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
      inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
      inline Quotas& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


      // quotaDescription Field Functions 
      bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
      void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
      inline string getQuotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
      inline Quotas& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


      // quotaItems Field Functions 
      bool hasQuotaItems() const { return this->quotaItems_ != nullptr;};
      void deleteQuotaItems() { this->quotaItems_ = nullptr;};
      inline const vector<Quotas::QuotaItems> & getQuotaItems() const { DARABONBA_PTR_GET_CONST(quotaItems_, vector<Quotas::QuotaItems>) };
      inline vector<Quotas::QuotaItems> getQuotaItems() { DARABONBA_PTR_GET(quotaItems_, vector<Quotas::QuotaItems>) };
      inline Quotas& setQuotaItems(const vector<Quotas::QuotaItems> & quotaItems) { DARABONBA_PTR_SET_VALUE(quotaItems_, quotaItems) };
      inline Quotas& setQuotaItems(vector<Quotas::QuotaItems> && quotaItems) { DARABONBA_PTR_SET_RVALUE(quotaItems_, quotaItems) };


      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline Quotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // quotaType Field Functions 
      bool hasQuotaType() const { return this->quotaType_ != nullptr;};
      void deleteQuotaType() { this->quotaType_ = nullptr;};
      inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
      inline Quotas& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


      // quotaUnit Field Functions 
      bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
      void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
      inline string getQuotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
      inline Quotas& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


      // supportedRange Field Functions 
      bool hasSupportedRange() const { return this->supportedRange_ != nullptr;};
      void deleteSupportedRange() { this->supportedRange_ = nullptr;};
      inline const vector<float> & getSupportedRange() const { DARABONBA_PTR_GET_CONST(supportedRange_, vector<float>) };
      inline vector<float> getSupportedRange() { DARABONBA_PTR_GET(supportedRange_, vector<float>) };
      inline Quotas& setSupportedRange(const vector<float> & supportedRange) { DARABONBA_PTR_SET_VALUE(supportedRange_, supportedRange) };
      inline Quotas& setSupportedRange(vector<float> && supportedRange) { DARABONBA_PTR_SET_RVALUE(supportedRange_, supportedRange) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline float getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0.0) };
      inline Quotas& setTotalQuota(float totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // totalUsage Field Functions 
      bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
      void deleteTotalUsage() { this->totalUsage_ = nullptr;};
      inline float getTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0.0) };
      inline Quotas& setTotalUsage(float totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


      // unadjustableDetail Field Functions 
      bool hasUnadjustableDetail() const { return this->unadjustableDetail_ != nullptr;};
      void deleteUnadjustableDetail() { this->unadjustableDetail_ = nullptr;};
      inline string getUnadjustableDetail() const { DARABONBA_PTR_GET_DEFAULT(unadjustableDetail_, "") };
      inline Quotas& setUnadjustableDetail(string unadjustableDetail) { DARABONBA_PTR_SET_VALUE(unadjustableDetail_, unadjustableDetail) };


      // usageMetric Field Functions 
      bool hasUsageMetric() const { return this->usageMetric_ != nullptr;};
      void deleteUsageMetric() { this->usageMetric_ = nullptr;};
      inline const Quotas::UsageMetric & getUsageMetric() const { DARABONBA_PTR_GET_CONST(usageMetric_, Quotas::UsageMetric) };
      inline Quotas::UsageMetric getUsageMetric() { DARABONBA_PTR_GET(usageMetric_, Quotas::UsageMetric) };
      inline Quotas& setUsageMetric(const Quotas::UsageMetric & usageMetric) { DARABONBA_PTR_SET_VALUE(usageMetric_, usageMetric) };
      inline Quotas& setUsageMetric(Quotas::UsageMetric && usageMetric) { DARABONBA_PTR_SET_RVALUE(usageMetric_, usageMetric) };


    protected:
      // Indicates whether the quota is adjustable.
      shared_ptr<bool> adjustable_ {};
      // The range of quota values that can be applied for the current quota item, which serves as a reference for quota applications.
      shared_ptr<vector<float>> applicableRange_ {};
      // The quota adjustment type.
      shared_ptr<string> applicableType_ {};
      // The sample reasons for applying for a quota adjustment.
      shared_ptr<string> applyReasonTips_ {};
      // Indicates whether the used quota is displayed.
      shared_ptr<bool> consumable_ {};
      // The quota dimensions. Format: `{"regionId":"region"}`.
      Darabonba::Json dimensions_ {};
      // The UTC time when the quota takes effect.
      shared_ptr<string> effectiveTime_ {};
      // The UTC time when the quota expires.
      shared_ptr<string> expireTime_ {};
      // Indicates whether the quota is a global quota.
      shared_ptr<bool> globalQuota_ {};
      // The quota calculation period.
      shared_ptr<Quotas::Period> period_ {};
      // The abbreviation of the cloud service name.
      shared_ptr<string> productCode_ {};
      // The ID of the quota.
      shared_ptr<string> quotaActionCode_ {};
      // The ARN of the quota.
      shared_ptr<string> quotaArn_ {};
      // The quota type.
      shared_ptr<string> quotaCategory_ {};
      // The quota description.
      shared_ptr<string> quotaDescription_ {};
      // The quota details.
      shared_ptr<vector<Quotas::QuotaItems>> quotaItems_ {};
      // The quota name.
      shared_ptr<string> quotaName_ {};
      // The quota type.
      shared_ptr<string> quotaType_ {};
      // The quota unit.
      shared_ptr<string> quotaUnit_ {};
      // The range of quota values supported by the current quota item, which serves as a reference when you configure a quota template.
      shared_ptr<vector<float>> supportedRange_ {};
      // The quota value.
      shared_ptr<float> totalQuota_ {};
      // The quota usage.
      shared_ptr<float> totalUsage_ {};
      // The reason why the quota is not adjustable.
      shared_ptr<string> unadjustableDetail_ {};
      // The monitoring information of the quota usage in CloudMonitor.
      // 
      // > An empty value indicates that no monitoring data is available for this quota in CloudMonitor.
      shared_ptr<Quotas::UsageMetric> usageMetric_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->quotas_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductQuotasResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductQuotasResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListProductQuotasResponseBody::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListProductQuotasResponseBody::Quotas>) };
    inline vector<ListProductQuotasResponseBody::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<ListProductQuotasResponseBody::Quotas>) };
    inline ListProductQuotasResponseBody& setQuotas(const vector<ListProductQuotasResponseBody::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListProductQuotasResponseBody& setQuotas(vector<ListProductQuotasResponseBody::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductQuotasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned for the current query.
    shared_ptr<int32_t> maxResults_ {};
    // Indicates whether a token for the next query is available.
    // 
    // - If NextToken is empty, it indicates that no subsequent query is available.
    // - If NextToken is returned, the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The quota details.
    shared_ptr<vector<ListProductQuotasResponseBody::Quotas>> quotas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records returned for the current request.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
