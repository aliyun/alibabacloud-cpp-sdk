// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QuotaApplicationTemplates, quotaApplicationTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QuotaApplicationTemplates, quotaApplicationTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotaApplicationTemplatesResponseBody() = default ;
    ListQuotaApplicationTemplatesResponseBody(const ListQuotaApplicationTemplatesResponseBody &) = default ;
    ListQuotaApplicationTemplatesResponseBody(ListQuotaApplicationTemplatesResponseBody &&) = default ;
    ListQuotaApplicationTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationTemplatesResponseBody() = default ;
    ListQuotaApplicationTemplatesResponseBody& operator=(const ListQuotaApplicationTemplatesResponseBody &) = default ;
    ListQuotaApplicationTemplatesResponseBody& operator=(ListQuotaApplicationTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaApplicationTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaApplicationTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicableRange, applicableRange_);
        DARABONBA_PTR_TO_JSON(ApplicableType, applicableType_);
        DARABONBA_PTR_TO_JSON(DesireValue, desireValue_);
        DARABONBA_ANY_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(EnvLanguage, envLanguage_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
        DARABONBA_PTR_TO_JSON(QuotaDescription, quotaDescription_);
        DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaApplicationTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicableRange, applicableRange_);
        DARABONBA_PTR_FROM_JSON(ApplicableType, applicableType_);
        DARABONBA_PTR_FROM_JSON(DesireValue, desireValue_);
        DARABONBA_ANY_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(EnvLanguage, envLanguage_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
        DARABONBA_PTR_FROM_JSON(QuotaDescription, quotaDescription_);
        DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      };
      QuotaApplicationTemplates() = default ;
      QuotaApplicationTemplates(const QuotaApplicationTemplates &) = default ;
      QuotaApplicationTemplates(QuotaApplicationTemplates &&) = default ;
      QuotaApplicationTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaApplicationTemplates() = default ;
      QuotaApplicationTemplates& operator=(const QuotaApplicationTemplates &) = default ;
      QuotaApplicationTemplates& operator=(QuotaApplicationTemplates &&) = default ;
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
        // The unit of the calculation cycle. Valid values:
        // 
        // - second
        // 
        // - minute
        // 
        // - hour
        // 
        // - day
        // 
        // - week
        shared_ptr<string> periodUnit_ {};
        // The value of the calculation cycle.
        shared_ptr<int32_t> periodValue_ {};
      };

      virtual bool empty() const override { return this->applicableRange_ == nullptr
        && this->applicableType_ == nullptr && this->desireValue_ == nullptr && this->dimensions_ == nullptr && this->effectiveTime_ == nullptr && this->envLanguage_ == nullptr
        && this->expireTime_ == nullptr && this->id_ == nullptr && this->noticeType_ == nullptr && this->period_ == nullptr && this->productCode_ == nullptr
        && this->quotaActionCode_ == nullptr && this->quotaCategory_ == nullptr && this->quotaDescription_ == nullptr && this->quotaName_ == nullptr; };
      // applicableRange Field Functions 
      bool hasApplicableRange() const { return this->applicableRange_ != nullptr;};
      void deleteApplicableRange() { this->applicableRange_ = nullptr;};
      inline const vector<float> & getApplicableRange() const { DARABONBA_PTR_GET_CONST(applicableRange_, vector<float>) };
      inline vector<float> getApplicableRange() { DARABONBA_PTR_GET(applicableRange_, vector<float>) };
      inline QuotaApplicationTemplates& setApplicableRange(const vector<float> & applicableRange) { DARABONBA_PTR_SET_VALUE(applicableRange_, applicableRange) };
      inline QuotaApplicationTemplates& setApplicableRange(vector<float> && applicableRange) { DARABONBA_PTR_SET_RVALUE(applicableRange_, applicableRange) };


      // applicableType Field Functions 
      bool hasApplicableType() const { return this->applicableType_ != nullptr;};
      void deleteApplicableType() { this->applicableType_ = nullptr;};
      inline string getApplicableType() const { DARABONBA_PTR_GET_DEFAULT(applicableType_, "") };
      inline QuotaApplicationTemplates& setApplicableType(string applicableType) { DARABONBA_PTR_SET_VALUE(applicableType_, applicableType) };


      // desireValue Field Functions 
      bool hasDesireValue() const { return this->desireValue_ != nullptr;};
      void deleteDesireValue() { this->desireValue_ = nullptr;};
      inline float getDesireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
      inline QuotaApplicationTemplates& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline       const Darabonba::Json & getDimensions() const { DARABONBA_GET(dimensions_) };
      Darabonba::Json & getDimensions() { DARABONBA_GET(dimensions_) };
      inline QuotaApplicationTemplates& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
      inline QuotaApplicationTemplates& setDimensions(Darabonba::Json && dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline QuotaApplicationTemplates& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // envLanguage Field Functions 
      bool hasEnvLanguage() const { return this->envLanguage_ != nullptr;};
      void deleteEnvLanguage() { this->envLanguage_ = nullptr;};
      inline string getEnvLanguage() const { DARABONBA_PTR_GET_DEFAULT(envLanguage_, "") };
      inline QuotaApplicationTemplates& setEnvLanguage(string envLanguage) { DARABONBA_PTR_SET_VALUE(envLanguage_, envLanguage) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline QuotaApplicationTemplates& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline QuotaApplicationTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // noticeType Field Functions 
      bool hasNoticeType() const { return this->noticeType_ != nullptr;};
      void deleteNoticeType() { this->noticeType_ = nullptr;};
      inline int32_t getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
      inline QuotaApplicationTemplates& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline const QuotaApplicationTemplates::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, QuotaApplicationTemplates::Period) };
      inline QuotaApplicationTemplates::Period getPeriod() { DARABONBA_PTR_GET(period_, QuotaApplicationTemplates::Period) };
      inline QuotaApplicationTemplates& setPeriod(const QuotaApplicationTemplates::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
      inline QuotaApplicationTemplates& setPeriod(QuotaApplicationTemplates::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline QuotaApplicationTemplates& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline QuotaApplicationTemplates& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaCategory Field Functions 
      bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
      void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
      inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
      inline QuotaApplicationTemplates& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


      // quotaDescription Field Functions 
      bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
      void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
      inline string getQuotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
      inline QuotaApplicationTemplates& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline QuotaApplicationTemplates& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    protected:
      // None.
      shared_ptr<vector<float>> applicableRange_ {};
      // The type of the adjustable value. Valid values:
      // 
      // - continuous
      // 
      // - discontinuous
      shared_ptr<string> applicableType_ {};
      // The requested value of the quota.
      shared_ptr<float> desireValue_ {};
      // The quota dimensions.
      // 
      // Format: {"regionId":"Region"}.
      Darabonba::Json dimensions_ {};
      // The start time of the validity period of the quota. The value is displayed in UTC.
      shared_ptr<string> effectiveTime_ {};
      // The language of the quota alert notification. Valid values:
      // 
      // - zh: Chinese
      // 
      // - en: English
      shared_ptr<string> envLanguage_ {};
      // The end time of the validity period of the quota. The value is displayed in UTC.
      shared_ptr<string> expireTime_ {};
      // The ID of the quota template.
      shared_ptr<string> id_ {};
      // Indicates whether Quota Center sends a notification about the application result. Valid values:
      // 
      // - 0: no
      // 
      // - 3: yes
      shared_ptr<int32_t> noticeType_ {};
      // The calculation cycle of the quota.
      shared_ptr<QuotaApplicationTemplates::Period> period_ {};
      // The abbreviation of the Alibaba Cloud service name.
      shared_ptr<string> productCode_ {};
      // The ID of the quota.
      shared_ptr<string> quotaActionCode_ {};
      // The type of the quota. Valid values:
      // 
      // - CommonQuota: general quota
      // 
      // - FlowControl: API rate limit
      // 
      // - WhiteListLabel: privilege
      shared_ptr<string> quotaCategory_ {};
      // The description of the quota.
      shared_ptr<string> quotaDescription_ {};
      // The name of the quota.
      shared_ptr<string> quotaName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->quotaApplicationTemplates_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotaApplicationTemplates Field Functions 
    bool hasQuotaApplicationTemplates() const { return this->quotaApplicationTemplates_ != nullptr;};
    void deleteQuotaApplicationTemplates() { this->quotaApplicationTemplates_ = nullptr;};
    inline const vector<ListQuotaApplicationTemplatesResponseBody::QuotaApplicationTemplates> & getQuotaApplicationTemplates() const { DARABONBA_PTR_GET_CONST(quotaApplicationTemplates_, vector<ListQuotaApplicationTemplatesResponseBody::QuotaApplicationTemplates>) };
    inline vector<ListQuotaApplicationTemplatesResponseBody::QuotaApplicationTemplates> getQuotaApplicationTemplates() { DARABONBA_PTR_GET(quotaApplicationTemplates_, vector<ListQuotaApplicationTemplatesResponseBody::QuotaApplicationTemplates>) };
    inline ListQuotaApplicationTemplatesResponseBody& setQuotaApplicationTemplates(const vector<ListQuotaApplicationTemplatesResponseBody::QuotaApplicationTemplates> & quotaApplicationTemplates) { DARABONBA_PTR_SET_VALUE(quotaApplicationTemplates_, quotaApplicationTemplates) };
    inline ListQuotaApplicationTemplatesResponseBody& setQuotaApplicationTemplates(vector<ListQuotaApplicationTemplatesResponseBody::QuotaApplicationTemplates> && quotaApplicationTemplates) { DARABONBA_PTR_SET_RVALUE(quotaApplicationTemplates_, quotaApplicationTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaApplicationTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaApplicationTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned for the query.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position at which the query ends.
    // 
    // > An empty value indicates that all data is returned.
    shared_ptr<string> nextToken_ {};
    // The information about quota templates.
    shared_ptr<vector<ListQuotaApplicationTemplatesResponseBody::QuotaApplicationTemplates>> quotaApplicationTemplates_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records returned for the query.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
