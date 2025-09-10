// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotaApplicationsRequestDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListQuotaApplicationsRequest() = default ;
    ListQuotaApplicationsRequest(const ListQuotaApplicationsRequest &) = default ;
    ListQuotaApplicationsRequest(ListQuotaApplicationsRequest &&) = default ;
    ListQuotaApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsRequest() = default ;
    ListQuotaApplicationsRequest& operator=(const ListQuotaApplicationsRequest &) = default ;
    ListQuotaApplicationsRequest& operator=(ListQuotaApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensions_ != nullptr
        && this->keyWord_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr
        && this->quotaCategory_ != nullptr && this->status_ != nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<ListQuotaApplicationsRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ListQuotaApplicationsRequestDimensions>) };
    inline vector<ListQuotaApplicationsRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<ListQuotaApplicationsRequestDimensions>) };
    inline ListQuotaApplicationsRequest& setDimensions(const vector<ListQuotaApplicationsRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ListQuotaApplicationsRequest& setDimensions(vector<ListQuotaApplicationsRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string keyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ListQuotaApplicationsRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationsRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationsRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListQuotaApplicationsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The quota dimensions.
    std::shared_ptr<vector<ListQuotaApplicationsRequestDimensions>> dimensions_ = nullptr;
    // The keyword that you want to use to search for the application.
    std::shared_ptr<string> keyWord_ = nullptr;
    // The maximum number of entries to return.
    // 
    // Valid values: 1 to 200. Default value: 30.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position from which you want to start the query. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the quota.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   CommonQuota: general quota
    // *   FlowControl: API rate limit
    // *   WhiteListLabel: whitelist quota
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The approval state of the quota increase application. Valid values:
    // 
    // *   Disagree: The application is rejected.
    // *   Agree: The application is approved.
    // *   Process: The application is in review.
    // *   Cancel: The application is canceled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
