// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSFORTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSFORTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationsForTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsForTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyEndTime, applyEndTime_);
      DARABONBA_PTR_TO_JSON(ApplyStartTime, applyStartTime_);
      DARABONBA_PTR_TO_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsForTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyEndTime, applyEndTime_);
      DARABONBA_PTR_FROM_JSON(ApplyStartTime, applyStartTime_);
      DARABONBA_PTR_FROM_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
    };
    ListQuotaApplicationsForTemplateRequest() = default ;
    ListQuotaApplicationsForTemplateRequest(const ListQuotaApplicationsForTemplateRequest &) = default ;
    ListQuotaApplicationsForTemplateRequest(ListQuotaApplicationsForTemplateRequest &&) = default ;
    ListQuotaApplicationsForTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsForTemplateRequest() = default ;
    ListQuotaApplicationsForTemplateRequest& operator=(const ListQuotaApplicationsForTemplateRequest &) = default ;
    ListQuotaApplicationsForTemplateRequest& operator=(ListQuotaApplicationsForTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyEndTime_ == nullptr
        && this->applyStartTime_ == nullptr && this->batchQuotaApplicationId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->productCode_ == nullptr
        && this->quotaActionCode_ == nullptr && this->quotaCategory_ == nullptr; };
    // applyEndTime Field Functions 
    bool hasApplyEndTime() const { return this->applyEndTime_ != nullptr;};
    void deleteApplyEndTime() { this->applyEndTime_ = nullptr;};
    inline string getApplyEndTime() const { DARABONBA_PTR_GET_DEFAULT(applyEndTime_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setApplyEndTime(string applyEndTime) { DARABONBA_PTR_SET_VALUE(applyEndTime_, applyEndTime) };


    // applyStartTime Field Functions 
    bool hasApplyStartTime() const { return this->applyStartTime_ != nullptr;};
    void deleteApplyStartTime() { this->applyStartTime_ = nullptr;};
    inline string getApplyStartTime() const { DARABONBA_PTR_GET_DEFAULT(applyStartTime_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setApplyStartTime(string applyStartTime) { DARABONBA_PTR_SET_VALUE(applyStartTime_, applyStartTime) };


    // batchQuotaApplicationId Field Functions 
    bool hasBatchQuotaApplicationId() const { return this->batchQuotaApplicationId_ != nullptr;};
    void deleteBatchQuotaApplicationId() { this->batchQuotaApplicationId_ = nullptr;};
    inline string getBatchQuotaApplicationId() const { DARABONBA_PTR_GET_DEFAULT(batchQuotaApplicationId_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setBatchQuotaApplicationId(string batchQuotaApplicationId) { DARABONBA_PTR_SET_VALUE(batchQuotaApplicationId_, batchQuotaApplicationId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationsForTemplateRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    // The end of the time range to query. The value is in UTC.
    // 
    // > The interval between `ApplyStartTime` and `ApplyEndTime` must be 7 days or less. If you do not set these two parameters, quota applications submitted within the last 7 days are queried.
    shared_ptr<string> applyEndTime_ {};
    // The beginning of the time range to query. The value is in UTC.
    // 
    // > The interval between `ApplyStartTime` and `ApplyEndTime` must be 7 days or less. If you do not set these two parameters, quota applications submitted within the last 7 days are queried.
    shared_ptr<string> applyStartTime_ {};
    // The ID of the batch quota application.
    shared_ptr<string> batchQuotaApplicationId_ {};
    // The maximum number of results to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 30.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the start of the data to read.
    // 
    // > If you do not set this parameter, the query starts from the beginning.
    shared_ptr<string> nextToken_ {};
    // The abbreviation of the Alibaba Cloud service.
    // 
    // > For more information about how to obtain the abbreviation of an Alibaba Cloud service, see the `ProductCode` parameter in [ListProducts](https://help.aliyun.com/document_detail/440555.html).
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
