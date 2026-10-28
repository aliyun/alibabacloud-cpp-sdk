// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSRESPONSEBODY_HPP_
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
  class ListQuotaApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QuotaApplications, quotaApplications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QuotaApplications, quotaApplications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotaApplicationsResponseBody() = default ;
    ListQuotaApplicationsResponseBody(const ListQuotaApplicationsResponseBody &) = default ;
    ListQuotaApplicationsResponseBody(ListQuotaApplicationsResponseBody &&) = default ;
    ListQuotaApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsResponseBody() = default ;
    ListQuotaApplicationsResponseBody& operator=(const ListQuotaApplicationsResponseBody &) = default ;
    ListQuotaApplicationsResponseBody& operator=(ListQuotaApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaApplications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaApplications& obj) { 
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
      friend void from_json(const Darabonba::Json& j, QuotaApplications& obj) { 
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
      QuotaApplications() = default ;
      QuotaApplications(const QuotaApplications &) = default ;
      QuotaApplications(QuotaApplications &&) = default ;
      QuotaApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaApplications() = default ;
      QuotaApplications& operator=(const QuotaApplications &) = default ;
      QuotaApplications& operator=(QuotaApplications &&) = default ;
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
        inline int64_t getPeriodValue() const { DARABONBA_PTR_GET_DEFAULT(periodValue_, 0L) };
        inline Period& setPeriodValue(int64_t periodValue) { DARABONBA_PTR_SET_VALUE(periodValue_, periodValue) };


      protected:
        // The unit of the quota calculation period. Valid values:
        // - second: seconds.
        // - minute: minutes.
        // - hour: hours.
        // - day: days.
        // - week: weeks.
        shared_ptr<string> periodUnit_ {};
        // The value of the quota calculation period.
        shared_ptr<int64_t> periodValue_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applyTime_ == nullptr && this->approveValue_ == nullptr && this->auditReason_ == nullptr && this->comment_ == nullptr && this->desireValue_ == nullptr
        && this->dimension_ == nullptr && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->noticeType_ == nullptr && this->period_ == nullptr
        && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaArn_ == nullptr && this->quotaCategory_ == nullptr && this->quotaDescription_ == nullptr
        && this->quotaName_ == nullptr && this->quotaUnit_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline QuotaApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
      inline QuotaApplications& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // approveValue Field Functions 
      bool hasApproveValue() const { return this->approveValue_ != nullptr;};
      void deleteApproveValue() { this->approveValue_ = nullptr;};
      inline float getApproveValue() const { DARABONBA_PTR_GET_DEFAULT(approveValue_, 0.0) };
      inline QuotaApplications& setApproveValue(float approveValue) { DARABONBA_PTR_SET_VALUE(approveValue_, approveValue) };


      // auditReason Field Functions 
      bool hasAuditReason() const { return this->auditReason_ != nullptr;};
      void deleteAuditReason() { this->auditReason_ = nullptr;};
      inline string getAuditReason() const { DARABONBA_PTR_GET_DEFAULT(auditReason_, "") };
      inline QuotaApplications& setAuditReason(string auditReason) { DARABONBA_PTR_SET_VALUE(auditReason_, auditReason) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline QuotaApplications& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // desireValue Field Functions 
      bool hasDesireValue() const { return this->desireValue_ != nullptr;};
      void deleteDesireValue() { this->desireValue_ = nullptr;};
      inline float getDesireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
      inline QuotaApplications& setDesireValue(float desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline       const Darabonba::Json & getDimension() const { DARABONBA_GET(dimension_) };
      Darabonba::Json & getDimension() { DARABONBA_GET(dimension_) };
      inline QuotaApplications& setDimension(const Darabonba::Json & dimension) { DARABONBA_SET_VALUE(dimension_, dimension) };
      inline QuotaApplications& setDimension(Darabonba::Json && dimension) { DARABONBA_SET_RVALUE(dimension_, dimension) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline QuotaApplications& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline QuotaApplications& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // noticeType Field Functions 
      bool hasNoticeType() const { return this->noticeType_ != nullptr;};
      void deleteNoticeType() { this->noticeType_ = nullptr;};
      inline int32_t getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0) };
      inline QuotaApplications& setNoticeType(int32_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline const QuotaApplications::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, QuotaApplications::Period) };
      inline QuotaApplications::Period getPeriod() { DARABONBA_PTR_GET(period_, QuotaApplications::Period) };
      inline QuotaApplications& setPeriod(const QuotaApplications::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
      inline QuotaApplications& setPeriod(QuotaApplications::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline QuotaApplications& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline QuotaApplications& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaArn Field Functions 
      bool hasQuotaArn() const { return this->quotaArn_ != nullptr;};
      void deleteQuotaArn() { this->quotaArn_ = nullptr;};
      inline string getQuotaArn() const { DARABONBA_PTR_GET_DEFAULT(quotaArn_, "") };
      inline QuotaApplications& setQuotaArn(string quotaArn) { DARABONBA_PTR_SET_VALUE(quotaArn_, quotaArn) };


      // quotaCategory Field Functions 
      bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
      void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
      inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
      inline QuotaApplications& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


      // quotaDescription Field Functions 
      bool hasQuotaDescription() const { return this->quotaDescription_ != nullptr;};
      void deleteQuotaDescription() { this->quotaDescription_ = nullptr;};
      inline string getQuotaDescription() const { DARABONBA_PTR_GET_DEFAULT(quotaDescription_, "") };
      inline QuotaApplications& setQuotaDescription(string quotaDescription) { DARABONBA_PTR_SET_VALUE(quotaDescription_, quotaDescription) };


      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline QuotaApplications& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // quotaUnit Field Functions 
      bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
      void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
      inline string getQuotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
      inline QuotaApplications& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline QuotaApplications& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QuotaApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the quota increase application.
      shared_ptr<string> applicationId_ {};
      // The time when the quota increase application was submitted. The value is in ISO 8601 format, in UTC, and ends with Z.
      shared_ptr<string> applyTime_ {};
      // The approved quota value of the quota increase application.
      shared_ptr<float> approveValue_ {};
      // The approval comment for the quota increase application.
      shared_ptr<string> auditReason_ {};
      // The remarks of the quota increase application.
      shared_ptr<string> comment_ {};
      // The requested quota value of the quota increase application.
      shared_ptr<float> desireValue_ {};
      // The quota dimensions of the quota increase application.
      Darabonba::Json dimension_ {};
      // The effective period of the quota increase application. The value is in ISO 8601 format, in UTC, and ends with Z.
      shared_ptr<string> effectiveTime_ {};
      // The expiration time of the quota increase application. The value is in ISO 8601 format, in UTC, and ends with Z.
      shared_ptr<string> expireTime_ {};
      // Indicates whether a notification is sent for the quota increase application result. Valid values:
      // 
      // - 0: No.
      // - 3: Yes.
      shared_ptr<int32_t> noticeType_ {};
      // The quota calculation period.
      shared_ptr<QuotaApplications::Period> period_ {};
      // The abbreviation of the cloud service name.
      shared_ptr<string> productCode_ {};
      // The quota ID.
      shared_ptr<string> quotaActionCode_ {};
      // The Alibaba Cloud Resource Name (ARN) of the quota.
      shared_ptr<string> quotaArn_ {};
      // The quota category. Valid values:
      // - CommonQuota (default): general quota.
      // - WhiteListLabel: privilege.
      // - FlowControl: API rate limit.
      shared_ptr<string> quotaCategory_ {};
      // The description of the quota.
      shared_ptr<string> quotaDescription_ {};
      // The name of the quota.
      shared_ptr<string> quotaName_ {};
      // The unit of the quota.
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

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->quotaApplications_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotaApplications Field Functions 
    bool hasQuotaApplications() const { return this->quotaApplications_ != nullptr;};
    void deleteQuotaApplications() { this->quotaApplications_ = nullptr;};
    inline const vector<ListQuotaApplicationsResponseBody::QuotaApplications> & getQuotaApplications() const { DARABONBA_PTR_GET_CONST(quotaApplications_, vector<ListQuotaApplicationsResponseBody::QuotaApplications>) };
    inline vector<ListQuotaApplicationsResponseBody::QuotaApplications> getQuotaApplications() { DARABONBA_PTR_GET(quotaApplications_, vector<ListQuotaApplicationsResponseBody::QuotaApplications>) };
    inline ListQuotaApplicationsResponseBody& setQuotaApplications(const vector<ListQuotaApplicationsResponseBody::QuotaApplications> & quotaApplications) { DARABONBA_PTR_SET_VALUE(quotaApplications_, quotaApplications) };
    inline ListQuotaApplicationsResponseBody& setQuotaApplications(vector<ListQuotaApplicationsResponseBody::QuotaApplications> && quotaApplications) { DARABONBA_PTR_SET_RVALUE(quotaApplications_, quotaApplications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaApplicationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position of the returned data. An empty value indicates that all data has been returned.
    shared_ptr<string> nextToken_ {};
    // The details of the quota increase applications.
    shared_ptr<vector<ListQuotaApplicationsResponseBody::QuotaApplications>> quotaApplications_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of quota increase applications.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
