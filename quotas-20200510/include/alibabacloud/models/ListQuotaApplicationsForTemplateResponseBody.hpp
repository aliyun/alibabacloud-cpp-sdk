// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODY_HPP_
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
  class ListQuotaApplicationsForTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsForTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QuotaBatchApplications, quotaBatchApplications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsForTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QuotaBatchApplications, quotaBatchApplications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotaApplicationsForTemplateResponseBody() = default ;
    ListQuotaApplicationsForTemplateResponseBody(const ListQuotaApplicationsForTemplateResponseBody &) = default ;
    ListQuotaApplicationsForTemplateResponseBody(ListQuotaApplicationsForTemplateResponseBody &&) = default ;
    ListQuotaApplicationsForTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsForTemplateResponseBody() = default ;
    ListQuotaApplicationsForTemplateResponseBody& operator=(const ListQuotaApplicationsForTemplateResponseBody &) = default ;
    ListQuotaApplicationsForTemplateResponseBody& operator=(ListQuotaApplicationsForTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaBatchApplications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaBatchApplications& obj) { 
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
      friend void from_json(const Darabonba::Json& j, QuotaBatchApplications& obj) { 
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
      QuotaBatchApplications() = default ;
      QuotaBatchApplications(const QuotaBatchApplications &) = default ;
      QuotaBatchApplications(QuotaBatchApplications &&) = default ;
      QuotaBatchApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaBatchApplications() = default ;
      QuotaBatchApplications& operator=(const QuotaBatchApplications &) = default ;
      QuotaBatchApplications& operator=(QuotaBatchApplications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuditStatusVos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuditStatusVos& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AuditStatusVos& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AuditStatusVos() = default ;
        AuditStatusVos(const AuditStatusVos &) = default ;
        AuditStatusVos(AuditStatusVos &&) = default ;
        AuditStatusVos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuditStatusVos() = default ;
        AuditStatusVos& operator=(const AuditStatusVos &) = default ;
        AuditStatusVos& operator=(AuditStatusVos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->status_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline AuditStatusVos& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AuditStatusVos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The number of applications.
        shared_ptr<int32_t> count_ {};
        // The approval status of the quota increase application. Valid values:
        // 
        // - Disagree: denied.
        // 
        // - Agree: approved.
        // 
        // - Process: pending approval.
        // 
        // - Cancel: closed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->aliyunUids_ == nullptr
        && this->applyTime_ == nullptr && this->auditStatusVos_ == nullptr && this->batchQuotaApplicationId_ == nullptr && this->desireValue_ == nullptr && this->dimensions_ == nullptr
        && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaCategory_ == nullptr
        && this->reason_ == nullptr; };
      // aliyunUids Field Functions 
      bool hasAliyunUids() const { return this->aliyunUids_ != nullptr;};
      void deleteAliyunUids() { this->aliyunUids_ = nullptr;};
      inline const vector<string> & getAliyunUids() const { DARABONBA_PTR_GET_CONST(aliyunUids_, vector<string>) };
      inline vector<string> getAliyunUids() { DARABONBA_PTR_GET(aliyunUids_, vector<string>) };
      inline QuotaBatchApplications& setAliyunUids(const vector<string> & aliyunUids) { DARABONBA_PTR_SET_VALUE(aliyunUids_, aliyunUids) };
      inline QuotaBatchApplications& setAliyunUids(vector<string> && aliyunUids) { DARABONBA_PTR_SET_RVALUE(aliyunUids_, aliyunUids) };


      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
      inline QuotaBatchApplications& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // auditStatusVos Field Functions 
      bool hasAuditStatusVos() const { return this->auditStatusVos_ != nullptr;};
      void deleteAuditStatusVos() { this->auditStatusVos_ = nullptr;};
      inline const vector<QuotaBatchApplications::AuditStatusVos> & getAuditStatusVos() const { DARABONBA_PTR_GET_CONST(auditStatusVos_, vector<QuotaBatchApplications::AuditStatusVos>) };
      inline vector<QuotaBatchApplications::AuditStatusVos> getAuditStatusVos() { DARABONBA_PTR_GET(auditStatusVos_, vector<QuotaBatchApplications::AuditStatusVos>) };
      inline QuotaBatchApplications& setAuditStatusVos(const vector<QuotaBatchApplications::AuditStatusVos> & auditStatusVos) { DARABONBA_PTR_SET_VALUE(auditStatusVos_, auditStatusVos) };
      inline QuotaBatchApplications& setAuditStatusVos(vector<QuotaBatchApplications::AuditStatusVos> && auditStatusVos) { DARABONBA_PTR_SET_RVALUE(auditStatusVos_, auditStatusVos) };


      // batchQuotaApplicationId Field Functions 
      bool hasBatchQuotaApplicationId() const { return this->batchQuotaApplicationId_ != nullptr;};
      void deleteBatchQuotaApplicationId() { this->batchQuotaApplicationId_ = nullptr;};
      inline string getBatchQuotaApplicationId() const { DARABONBA_PTR_GET_DEFAULT(batchQuotaApplicationId_, "") };
      inline QuotaBatchApplications& setBatchQuotaApplicationId(string batchQuotaApplicationId) { DARABONBA_PTR_SET_VALUE(batchQuotaApplicationId_, batchQuotaApplicationId) };


      // desireValue Field Functions 
      bool hasDesireValue() const { return this->desireValue_ != nullptr;};
      void deleteDesireValue() { this->desireValue_ = nullptr;};
      inline double getDesireValue() const { DARABONBA_PTR_GET_DEFAULT(desireValue_, 0.0) };
      inline QuotaBatchApplications& setDesireValue(double desireValue) { DARABONBA_PTR_SET_VALUE(desireValue_, desireValue) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline       const Darabonba::Json & getDimensions() const { DARABONBA_GET(dimensions_) };
      Darabonba::Json & getDimensions() { DARABONBA_GET(dimensions_) };
      inline QuotaBatchApplications& setDimensions(const Darabonba::Json & dimensions) { DARABONBA_SET_VALUE(dimensions_, dimensions) };
      inline QuotaBatchApplications& setDimensions(Darabonba::Json && dimensions) { DARABONBA_SET_RVALUE(dimensions_, dimensions) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline QuotaBatchApplications& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline QuotaBatchApplications& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline QuotaBatchApplications& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline QuotaBatchApplications& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // quotaCategory Field Functions 
      bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
      void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
      inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
      inline QuotaBatchApplications& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline QuotaBatchApplications& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // The list of Alibaba Cloud accounts of the members in a resource directory for which the quota applications are submitted.
      shared_ptr<vector<string>> aliyunUids_ {};
      // The UTC time when the quota increase application was submitted.
      shared_ptr<string> applyTime_ {};
      // The number of applications in different approval states.
      shared_ptr<vector<QuotaBatchApplications::AuditStatusVos>> auditStatusVos_ {};
      // The ID of the batch quota application.
      shared_ptr<string> batchQuotaApplicationId_ {};
      // The requested quota value.
      shared_ptr<double> desireValue_ {};
      // The quota dimensions.
      // 
      // Format: {"regionId":"cn-hangzhou"}.
      Darabonba::Json dimensions_ {};
      // The UTC time when the quota takes effect.
      shared_ptr<string> effectiveTime_ {};
      // The UTC time when the quota expires.
      shared_ptr<string> expireTime_ {};
      // The abbreviation of the Alibaba Cloud service.
      shared_ptr<string> productCode_ {};
      // The quota ID.
      shared_ptr<string> quotaActionCode_ {};
      // The type of the quota. Valid values:
      // 
      // - CommonQuota: general quota.
      // 
      // - FlowControl: API rate limit.
      // 
      // - WhiteListLabel: privilege.
      shared_ptr<string> quotaCategory_ {};
      // The reason for the quota increase application.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->quotaBatchApplications_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationsForTemplateResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationsForTemplateResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotaBatchApplications Field Functions 
    bool hasQuotaBatchApplications() const { return this->quotaBatchApplications_ != nullptr;};
    void deleteQuotaBatchApplications() { this->quotaBatchApplications_ = nullptr;};
    inline const vector<ListQuotaApplicationsForTemplateResponseBody::QuotaBatchApplications> & getQuotaBatchApplications() const { DARABONBA_PTR_GET_CONST(quotaBatchApplications_, vector<ListQuotaApplicationsForTemplateResponseBody::QuotaBatchApplications>) };
    inline vector<ListQuotaApplicationsForTemplateResponseBody::QuotaBatchApplications> getQuotaBatchApplications() { DARABONBA_PTR_GET(quotaBatchApplications_, vector<ListQuotaApplicationsForTemplateResponseBody::QuotaBatchApplications>) };
    inline ListQuotaApplicationsForTemplateResponseBody& setQuotaBatchApplications(const vector<ListQuotaApplicationsForTemplateResponseBody::QuotaBatchApplications> & quotaBatchApplications) { DARABONBA_PTR_SET_VALUE(quotaBatchApplications_, quotaBatchApplications) };
    inline ListQuotaApplicationsForTemplateResponseBody& setQuotaBatchApplications(vector<ListQuotaApplicationsForTemplateResponseBody::QuotaBatchApplications> && quotaBatchApplications) { DARABONBA_PTR_SET_RVALUE(quotaBatchApplications_, quotaBatchApplications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaApplicationsForTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaApplicationsForTemplateResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned for the query.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the start of the data to read.
    shared_ptr<string> nextToken_ {};
    // The list of historical quota applications.
    shared_ptr<vector<ListQuotaApplicationsForTemplateResponseBody::QuotaBatchApplications>> quotaBatchApplications_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records returned for the request.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
