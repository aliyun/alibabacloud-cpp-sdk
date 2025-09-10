// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductQuotasRequestDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListProductQuotasRequest() = default ;
    ListProductQuotasRequest(const ListProductQuotasRequest &) = default ;
    ListProductQuotasRequest(ListProductQuotasRequest &&) = default ;
    ListProductQuotasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotasRequest() = default ;
    ListProductQuotasRequest& operator=(const ListProductQuotasRequest &) = default ;
    ListProductQuotasRequest& operator=(ListProductQuotasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensions_ != nullptr
        && this->groupCode_ != nullptr && this->keyWord_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->productCode_ != nullptr
        && this->quotaActionCode_ != nullptr && this->quotaCategory_ != nullptr && this->sortField_ != nullptr && this->sortOrder_ != nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<ListProductQuotasRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ListProductQuotasRequestDimensions>) };
    inline vector<ListProductQuotasRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<ListProductQuotasRequestDimensions>) };
    inline ListProductQuotasRequest& setDimensions(const vector<ListProductQuotasRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ListProductQuotasRequest& setDimensions(vector<ListProductQuotasRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // groupCode Field Functions 
    bool hasGroupCode() const { return this->groupCode_ != nullptr;};
    void deleteGroupCode() { this->groupCode_ = nullptr;};
    inline string groupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
    inline ListProductQuotasRequest& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string keyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ListProductQuotasRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductQuotasRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductQuotasRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductQuotasRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListProductQuotasRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListProductQuotasRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListProductQuotasRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListProductQuotasRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The quota dimensions.
    std::shared_ptr<vector<ListProductQuotasRequestDimensions>> dimensions_ = nullptr;
    // The code of the dimension group.
    std::shared_ptr<string> groupCode_ = nullptr;
    // The keyword that you want to use to search for the quotas.
    // 
    // >  This parameter is available only for quotas that belong to ECS Quotas by Instance Type. The keyword is used to match the values of `QuotaName` and `QuotaActionCode`.
    std::shared_ptr<string> keyWord_ = nullptr;
    // The maximum number of records that can be returned for the query.
    // 
    // Valid values: 1 to 100. Default value: 30.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // *   You do not need to specify this parameter for the first and last requests.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, call the [ListProducts](https://help.aliyun.com/document_detail/440555.html) operation and check the value of the `ProductCode` parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The type of the quota.
    // 
    // Default value: CommonQuota.
    // 
    // Valid values:
    // 
    // *   FlowControl: API rate limit
    // *   WhiteListLabel: privilege
    // *   CommonQuota: general quota
    std::shared_ptr<string> quotaCategory_ = nullptr;
    // The field based on which you want to sort the returned records.
    // 
    // >  This parameter is available only for quotas that belong to ECS Quotas by Instance Type. You can leave this parameter empty.
    // 
    // Valid values:
    // 
    // *   TOTAL: sorts the returned records based on the total quota.
    // *   TIME: sorts the returned records based on the time when the quota was last modified.
    // *   RESERVED: sorts the returned records based on the reserved quota.
    std::shared_ptr<string> sortField_ = nullptr;
    // The order in which you want to sort the returned records.
    // 
    // >  This parameter is available only for quotas that belong to ECS Quotas by Instance Type. You can leave this parameter empty.
    // 
    // Valid values:
    // 
    // *   Descending
    // *   Ascending
    std::shared_ptr<string> sortOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
