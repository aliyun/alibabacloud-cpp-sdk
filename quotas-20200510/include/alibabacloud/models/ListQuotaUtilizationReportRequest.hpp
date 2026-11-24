// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAUTILIZATIONREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAUTILIZATIONREPORTREQUEST_HPP_
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
  class ListQuotaUtilizationReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaUtilizationReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Adjustable, adjustable_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(QuotaRegionId, quotaRegionId_);
      DARABONBA_PTR_TO_JSON(UtilizationStatuses, utilizationStatuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaUtilizationReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Adjustable, adjustable_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(QuotaRegionId, quotaRegionId_);
      DARABONBA_PTR_FROM_JSON(UtilizationStatuses, utilizationStatuses_);
    };
    ListQuotaUtilizationReportRequest() = default ;
    ListQuotaUtilizationReportRequest(const ListQuotaUtilizationReportRequest &) = default ;
    ListQuotaUtilizationReportRequest(ListQuotaUtilizationReportRequest &&) = default ;
    ListQuotaUtilizationReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaUtilizationReportRequest() = default ;
    ListQuotaUtilizationReportRequest& operator=(const ListQuotaUtilizationReportRequest &) = default ;
    ListQuotaUtilizationReportRequest& operator=(ListQuotaUtilizationReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adjustable_ == nullptr
        && this->keyWords_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->productCode_ == nullptr && this->quotaCategory_ == nullptr
        && this->quotaRegionId_ == nullptr && this->utilizationStatuses_ == nullptr; };
    // adjustable Field Functions 
    bool hasAdjustable() const { return this->adjustable_ != nullptr;};
    void deleteAdjustable() { this->adjustable_ = nullptr;};
    inline bool getAdjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, false) };
    inline ListQuotaUtilizationReportRequest& setAdjustable(bool adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline string getKeyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
    inline ListQuotaUtilizationReportRequest& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaUtilizationReportRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaUtilizationReportRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaUtilizationReportRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaUtilizationReportRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // quotaRegionId Field Functions 
    bool hasQuotaRegionId() const { return this->quotaRegionId_ != nullptr;};
    void deleteQuotaRegionId() { this->quotaRegionId_ = nullptr;};
    inline string getQuotaRegionId() const { DARABONBA_PTR_GET_DEFAULT(quotaRegionId_, "") };
    inline ListQuotaUtilizationReportRequest& setQuotaRegionId(string quotaRegionId) { DARABONBA_PTR_SET_VALUE(quotaRegionId_, quotaRegionId) };


    // utilizationStatuses Field Functions 
    bool hasUtilizationStatuses() const { return this->utilizationStatuses_ != nullptr;};
    void deleteUtilizationStatuses() { this->utilizationStatuses_ = nullptr;};
    inline const vector<string> & getUtilizationStatuses() const { DARABONBA_PTR_GET_CONST(utilizationStatuses_, vector<string>) };
    inline vector<string> getUtilizationStatuses() { DARABONBA_PTR_GET(utilizationStatuses_, vector<string>) };
    inline ListQuotaUtilizationReportRequest& setUtilizationStatuses(const vector<string> & utilizationStatuses) { DARABONBA_PTR_SET_VALUE(utilizationStatuses_, utilizationStatuses) };
    inline ListQuotaUtilizationReportRequest& setUtilizationStatuses(vector<string> && utilizationStatuses) { DARABONBA_PTR_SET_RVALUE(utilizationStatuses_, utilizationStatuses) };


  protected:
    // Specifies whether to filter quotas by adjustability. Valid values:
    // - true: Queries only adjustable quotas.
    // - false: Queries only non-adjustable quotas.
    // If this parameter is not specified, quotas are not filtered by adjustability.
    shared_ptr<bool> adjustable_ {};
    // The search keyword. Performs a fuzzy match based on the quota name or quota ID.
    shared_ptr<string> keyWords_ {};
    // The maximum number of entries to return for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Do not specify this parameter for the first query. For subsequent queries, pass the NextToken value returned in the previous response as is, and keep the quota type and filter conditions unchanged. Do not parse or construct the token.
    shared_ptr<string> nextToken_ {};
    // The abbreviation of the cloud service.
    // 
    // > For information about how to obtain the abbreviation of a cloud service, see ProductCode in [ListProducts](https://help.aliyun.com/document_detail/440555.html).
    shared_ptr<string> productCode_ {};
    // CommonQuota, FlowControl
    shared_ptr<string> quotaCategory_ {};
    // The region ID of the quota, such as cn-hangzhou. If this parameter is not specified or is left empty, quotas are not filtered by region.
    shared_ptr<string> quotaRegionId_ {};
    // The utilization statuses. You can specify multiple values. If this parameter is not specified or an empty list is passed, quotas are not filtered by utilization status.
    shared_ptr<vector<string>> utilizationStatuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
