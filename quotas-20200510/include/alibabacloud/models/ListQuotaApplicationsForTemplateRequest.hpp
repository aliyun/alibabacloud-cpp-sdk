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
    virtual bool empty() const override { this->applyEndTime_ != nullptr
        && this->applyStartTime_ != nullptr && this->batchQuotaApplicationId_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->productCode_ != nullptr
        && this->quotaActionCode_ != nullptr && this->quotaCategory_ != nullptr; };
    // applyEndTime Field Functions 
    bool hasApplyEndTime() const { return this->applyEndTime_ != nullptr;};
    void deleteApplyEndTime() { this->applyEndTime_ = nullptr;};
    inline string applyEndTime() const { DARABONBA_PTR_GET_DEFAULT(applyEndTime_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setApplyEndTime(string applyEndTime) { DARABONBA_PTR_SET_VALUE(applyEndTime_, applyEndTime) };


    // applyStartTime Field Functions 
    bool hasApplyStartTime() const { return this->applyStartTime_ != nullptr;};
    void deleteApplyStartTime() { this->applyStartTime_ = nullptr;};
    inline string applyStartTime() const { DARABONBA_PTR_GET_DEFAULT(applyStartTime_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setApplyStartTime(string applyStartTime) { DARABONBA_PTR_SET_VALUE(applyStartTime_, applyStartTime) };


    // batchQuotaApplicationId Field Functions 
    bool hasBatchQuotaApplicationId() const { return this->batchQuotaApplicationId_ != nullptr;};
    void deleteBatchQuotaApplicationId() { this->batchQuotaApplicationId_ = nullptr;};
    inline string batchQuotaApplicationId() const { DARABONBA_PTR_GET_DEFAULT(batchQuotaApplicationId_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setBatchQuotaApplicationId(string batchQuotaApplicationId) { DARABONBA_PTR_SET_VALUE(batchQuotaApplicationId_, batchQuotaApplicationId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationsForTemplateRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationsForTemplateRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    // The UTC time when the quota application ends.
    std::shared_ptr<string> applyEndTime_ = nullptr;
    // The UTC time when the quota application starts.
    std::shared_ptr<string> applyStartTime_ = nullptr;
    // The ID of the quota application batch.
    std::shared_ptr<string> batchQuotaApplicationId_ = nullptr;
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 30.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position from which you want to start the query.
    // 
    // >  An empty value indicates that the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, call the [ListProducts](https://help.aliyun.com/document_detail/440555.html) operation and check the value of `ProductCode` in the response.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The type of the quota. Valid values:
    // 
    // *   CommonQuota: general quota
    // *   FlowControl: API rate limit
    // *   WhiteListLabel: privilege
    std::shared_ptr<string> quotaCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
