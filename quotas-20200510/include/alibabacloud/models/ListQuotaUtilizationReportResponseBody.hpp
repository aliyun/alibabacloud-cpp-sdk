// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAUTILIZATIONREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAUTILIZATIONREPORTRESPONSEBODY_HPP_
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
  class ListQuotaUtilizationReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaUtilizationReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(GeneratedAt, generatedAt_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaUtilizationReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(GeneratedAt, generatedAt_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotaUtilizationReportResponseBody() = default ;
    ListQuotaUtilizationReportResponseBody(const ListQuotaUtilizationReportResponseBody &) = default ;
    ListQuotaUtilizationReportResponseBody(ListQuotaUtilizationReportResponseBody &&) = default ;
    ListQuotaUtilizationReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaUtilizationReportResponseBody() = default ;
    ListQuotaUtilizationReportResponseBody& operator=(const ListQuotaUtilizationReportResponseBody &) = default ;
    ListQuotaUtilizationReportResponseBody& operator=(ListQuotaUtilizationReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(Adjustable, adjustable_);
        DARABONBA_PTR_TO_JSON(Consumable, consumable_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(FlowControlAlgo, flowControlAlgo_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_TO_JSON(QuotaArn, quotaArn_);
        DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
        DARABONBA_PTR_TO_JSON(QuotaDescription, quotaDescription_);
        DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_TO_JSON(TotalUsage, totalUsage_);
        DARABONBA_PTR_TO_JSON(UnadjustableDetail, unadjustableDetail_);
        DARABONBA_PTR_TO_JSON(UsageMetric, usageMetric_);
        DARABONBA_PTR_TO_JSON(Utilization, utilization_);
        DARABONBA_PTR_TO_JSON(UtilizationStatus, utilizationStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(Adjustable, adjustable_);
        DARABONBA_PTR_FROM_JSON(Consumable, consumable_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(FlowControlAlgo, flowControlAlgo_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_FROM_JSON(QuotaArn, quotaArn_);
        DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
        DARABONBA_PTR_FROM_JSON(QuotaDescription, quotaDescription_);
        DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_FROM_JSON(TotalUsage, totalUsage_);
        DARABONBA_PTR_FROM_JSON(UnadjustableDetail, unadjustableDetail_);
        DARABONBA_PTR_FROM_JSON(UsageMetric, usageMetric_);
        DARABONBA_PTR_FROM_JSON(Utilization, utilization_);
        DARABONBA_PTR_FROM_JSON(UtilizationStatus, utilizationStatus_);
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
        shared_ptr<map<string, string>> metricDimensions_ {};
        shared_ptr<string> metricName_ {};
        shared_ptr<string> metricNamespace_ {};
      };

      class FlowControlAlgo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowControlAlgo& obj) { 
          DARABONBA_PTR_TO_JSON(AlgoType, algoType_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(RefillInterval, refillInterval_);
          DARABONBA_PTR_TO_JSON(TokensPerRefill, tokensPerRefill_);
          DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
        };
        friend void from_json(const Darabonba::Json& j, FlowControlAlgo& obj) { 
          DARABONBA_PTR_FROM_JSON(AlgoType, algoType_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(RefillInterval, refillInterval_);
          DARABONBA_PTR_FROM_JSON(TokensPerRefill, tokensPerRefill_);
          DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
        };
        FlowControlAlgo() = default ;
        FlowControlAlgo(const FlowControlAlgo &) = default ;
        FlowControlAlgo(FlowControlAlgo &&) = default ;
        FlowControlAlgo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowControlAlgo() = default ;
        FlowControlAlgo& operator=(const FlowControlAlgo &) = default ;
        FlowControlAlgo& operator=(FlowControlAlgo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          shared_ptr<string> periodUnit_ {};
          shared_ptr<int32_t> periodValue_ {};
        };

        virtual bool empty() const override { return this->algoType_ == nullptr
        && this->period_ == nullptr && this->refillInterval_ == nullptr && this->tokensPerRefill_ == nullptr && this->totalQuota_ == nullptr; };
        // algoType Field Functions 
        bool hasAlgoType() const { return this->algoType_ != nullptr;};
        void deleteAlgoType() { this->algoType_ = nullptr;};
        inline string getAlgoType() const { DARABONBA_PTR_GET_DEFAULT(algoType_, "") };
        inline FlowControlAlgo& setAlgoType(string algoType) { DARABONBA_PTR_SET_VALUE(algoType_, algoType) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline const FlowControlAlgo::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, FlowControlAlgo::Period) };
        inline FlowControlAlgo::Period getPeriod() { DARABONBA_PTR_GET(period_, FlowControlAlgo::Period) };
        inline FlowControlAlgo& setPeriod(const FlowControlAlgo::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
        inline FlowControlAlgo& setPeriod(FlowControlAlgo::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


        // refillInterval Field Functions 
        bool hasRefillInterval() const { return this->refillInterval_ != nullptr;};
        void deleteRefillInterval() { this->refillInterval_ = nullptr;};
        inline int32_t getRefillInterval() const { DARABONBA_PTR_GET_DEFAULT(refillInterval_, 0) };
        inline FlowControlAlgo& setRefillInterval(int32_t refillInterval) { DARABONBA_PTR_SET_VALUE(refillInterval_, refillInterval) };


        // tokensPerRefill Field Functions 
        bool hasTokensPerRefill() const { return this->tokensPerRefill_ != nullptr;};
        void deleteTokensPerRefill() { this->tokensPerRefill_ = nullptr;};
        inline int32_t getTokensPerRefill() const { DARABONBA_PTR_GET_DEFAULT(tokensPerRefill_, 0) };
        inline FlowControlAlgo& setTokensPerRefill(int32_t tokensPerRefill) { DARABONBA_PTR_SET_VALUE(tokensPerRefill_, tokensPerRefill) };


        // totalQuota Field Functions 
        bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
        void deleteTotalQuota() { this->totalQuota_ = nullptr;};
        inline double getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0.0) };
        inline FlowControlAlgo& setTotalQuota(double totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      protected:
        shared_ptr<string> algoType_ {};
        shared_ptr<FlowControlAlgo::Period> period_ {};
        shared_ptr<int32_t> refillInterval_ {};
        shared_ptr<int32_t> tokensPerRefill_ {};
        shared_ptr<double> totalQuota_ {};
      };

      virtual bool empty() const override { return this->adjustable_ == nullptr
        && this->consumable_ == nullptr && this->dimensions_ == nullptr && this->flowControlAlgo_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr
        && this->quotaArn_ == nullptr && this->quotaCategory_ == nullptr && this->quotaDescription_ == nullptr && this->quotaName_ == nullptr && this->totalQuota_ == nullptr
        && this->totalUsage_ == nullptr && this->unadjustableDetail_ == nullptr && this->usageMetric_ == nullptr && this->utilization_ == nullptr && this->utilizationStatus_ == nullptr; };
      // adjustable Field Functions 
      bool hasAdjustable() const { return this->adjustable_ != nullptr;};
      void deleteAdjustable() { this->adjustable_ = nullptr;};
      inline bool getAdjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, false) };
      inline Quotas& setAdjustable(bool adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


      // consumable Field Functions 
      bool hasConsumable() const { return this->consumable_ != nullptr;};
      void deleteConsumable() { this->consumable_ = nullptr;};
      inline bool getConsumable() const { DARABONBA_PTR_GET_DEFAULT(consumable_, false) };
      inline Quotas& setConsumable(bool consumable) { DARABONBA_PTR_SET_VALUE(consumable_, consumable) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const map<string, string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, map<string, string>) };
      inline map<string, string> getDimensions() { DARABONBA_PTR_GET(dimensions_, map<string, string>) };
      inline Quotas& setDimensions(const map<string, string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline Quotas& setDimensions(map<string, string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // flowControlAlgo Field Functions 
      bool hasFlowControlAlgo() const { return this->flowControlAlgo_ != nullptr;};
      void deleteFlowControlAlgo() { this->flowControlAlgo_ = nullptr;};
      inline const Quotas::FlowControlAlgo & getFlowControlAlgo() const { DARABONBA_PTR_GET_CONST(flowControlAlgo_, Quotas::FlowControlAlgo) };
      inline Quotas::FlowControlAlgo getFlowControlAlgo() { DARABONBA_PTR_GET(flowControlAlgo_, Quotas::FlowControlAlgo) };
      inline Quotas& setFlowControlAlgo(const Quotas::FlowControlAlgo & flowControlAlgo) { DARABONBA_PTR_SET_VALUE(flowControlAlgo_, flowControlAlgo) };
      inline Quotas& setFlowControlAlgo(Quotas::FlowControlAlgo && flowControlAlgo) { DARABONBA_PTR_SET_RVALUE(flowControlAlgo_, flowControlAlgo) };


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


      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline Quotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline double getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0.0) };
      inline Quotas& setTotalQuota(double totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // totalUsage Field Functions 
      bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
      void deleteTotalUsage() { this->totalUsage_ = nullptr;};
      inline double getTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0.0) };
      inline Quotas& setTotalUsage(double totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


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


      // utilization Field Functions 
      bool hasUtilization() const { return this->utilization_ != nullptr;};
      void deleteUtilization() { this->utilization_ = nullptr;};
      inline double getUtilization() const { DARABONBA_PTR_GET_DEFAULT(utilization_, 0.0) };
      inline Quotas& setUtilization(double utilization) { DARABONBA_PTR_SET_VALUE(utilization_, utilization) };


      // utilizationStatus Field Functions 
      bool hasUtilizationStatus() const { return this->utilizationStatus_ != nullptr;};
      void deleteUtilizationStatus() { this->utilizationStatus_ = nullptr;};
      inline string getUtilizationStatus() const { DARABONBA_PTR_GET_DEFAULT(utilizationStatus_, "") };
      inline Quotas& setUtilizationStatus(string utilizationStatus) { DARABONBA_PTR_SET_VALUE(utilizationStatus_, utilizationStatus) };


    protected:
      shared_ptr<bool> adjustable_ {};
      shared_ptr<bool> consumable_ {};
      shared_ptr<map<string, string>> dimensions_ {};
      shared_ptr<Quotas::FlowControlAlgo> flowControlAlgo_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> quotaActionCode_ {};
      shared_ptr<string> quotaArn_ {};
      shared_ptr<string> quotaCategory_ {};
      shared_ptr<string> quotaDescription_ {};
      shared_ptr<string> quotaName_ {};
      shared_ptr<double> totalQuota_ {};
      shared_ptr<double> totalUsage_ {};
      shared_ptr<string> unadjustableDetail_ {};
      shared_ptr<Quotas::UsageMetric> usageMetric_ {};
      shared_ptr<double> utilization_ {};
      shared_ptr<string> utilizationStatus_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->generatedAt_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->quotas_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListQuotaUtilizationReportResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListQuotaUtilizationReportResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // generatedAt Field Functions 
    bool hasGeneratedAt() const { return this->generatedAt_ != nullptr;};
    void deleteGeneratedAt() { this->generatedAt_ = nullptr;};
    inline string getGeneratedAt() const { DARABONBA_PTR_GET_DEFAULT(generatedAt_, "") };
    inline ListQuotaUtilizationReportResponseBody& setGeneratedAt(string generatedAt) { DARABONBA_PTR_SET_VALUE(generatedAt_, generatedAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListQuotaUtilizationReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaUtilizationReportResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListQuotaUtilizationReportResponseBody::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListQuotaUtilizationReportResponseBody::Quotas>) };
    inline vector<ListQuotaUtilizationReportResponseBody::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<ListQuotaUtilizationReportResponseBody::Quotas>) };
    inline ListQuotaUtilizationReportResponseBody& setQuotas(const vector<ListQuotaUtilizationReportResponseBody::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListQuotaUtilizationReportResponseBody& setQuotas(vector<ListQuotaUtilizationReportResponseBody::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaUtilizationReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListQuotaUtilizationReportResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQuotaUtilizationReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaUtilizationReportResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> generatedAt_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListQuotaUtilizationReportResponseBody::Quotas>> quotas_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
