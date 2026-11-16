// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPLITSUMMARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSPLITSUMMARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListSplitSummaryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSplitSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommonFilters, commonFiltersShrink_);
      DARABONBA_PTR_TO_JSON(CostCategoriesFilters, costCategoriesFiltersShrink_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, periodShrink_);
      DARABONBA_PTR_TO_JSON(TagFilters, tagFiltersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListSplitSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonFilters, commonFiltersShrink_);
      DARABONBA_PTR_FROM_JSON(CostCategoriesFilters, costCategoriesFiltersShrink_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, periodShrink_);
      DARABONBA_PTR_FROM_JSON(TagFilters, tagFiltersShrink_);
    };
    ListSplitSummaryShrinkRequest() = default ;
    ListSplitSummaryShrinkRequest(const ListSplitSummaryShrinkRequest &) = default ;
    ListSplitSummaryShrinkRequest(ListSplitSummaryShrinkRequest &&) = default ;
    ListSplitSummaryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSplitSummaryShrinkRequest() = default ;
    ListSplitSummaryShrinkRequest& operator=(const ListSplitSummaryShrinkRequest &) = default ;
    ListSplitSummaryShrinkRequest& operator=(ListSplitSummaryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonFiltersShrink_ == nullptr
        && this->costCategoriesFiltersShrink_ == nullptr && this->ecIdAccountIdsShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->periodShrink_ == nullptr
        && this->tagFiltersShrink_ == nullptr; };
    // commonFiltersShrink Field Functions 
    bool hasCommonFiltersShrink() const { return this->commonFiltersShrink_ != nullptr;};
    void deleteCommonFiltersShrink() { this->commonFiltersShrink_ = nullptr;};
    inline string getCommonFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(commonFiltersShrink_, "") };
    inline ListSplitSummaryShrinkRequest& setCommonFiltersShrink(string commonFiltersShrink) { DARABONBA_PTR_SET_VALUE(commonFiltersShrink_, commonFiltersShrink) };


    // costCategoriesFiltersShrink Field Functions 
    bool hasCostCategoriesFiltersShrink() const { return this->costCategoriesFiltersShrink_ != nullptr;};
    void deleteCostCategoriesFiltersShrink() { this->costCategoriesFiltersShrink_ = nullptr;};
    inline string getCostCategoriesFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(costCategoriesFiltersShrink_, "") };
    inline ListSplitSummaryShrinkRequest& setCostCategoriesFiltersShrink(string costCategoriesFiltersShrink) { DARABONBA_PTR_SET_VALUE(costCategoriesFiltersShrink_, costCategoriesFiltersShrink) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline ListSplitSummaryShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSplitSummaryShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSplitSummaryShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // periodShrink Field Functions 
    bool hasPeriodShrink() const { return this->periodShrink_ != nullptr;};
    void deletePeriodShrink() { this->periodShrink_ = nullptr;};
    inline string getPeriodShrink() const { DARABONBA_PTR_GET_DEFAULT(periodShrink_, "") };
    inline ListSplitSummaryShrinkRequest& setPeriodShrink(string periodShrink) { DARABONBA_PTR_SET_VALUE(periodShrink_, periodShrink) };


    // tagFiltersShrink Field Functions 
    bool hasTagFiltersShrink() const { return this->tagFiltersShrink_ != nullptr;};
    void deleteTagFiltersShrink() { this->tagFiltersShrink_ = nullptr;};
    inline string getTagFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(tagFiltersShrink_, "") };
    inline ListSplitSummaryShrinkRequest& setTagFiltersShrink(string tagFiltersShrink) { DARABONBA_PTR_SET_VALUE(tagFiltersShrink_, tagFiltersShrink) };


  protected:
    // The common filter conditions. Supports filtering by product, commodity, region, billing item, fee type, resource, account, financial unit, resource group, and split item. Different fields are combined by AND. Only one object can be passed for the same field. For more information, see the supplementary description of request parameters.
    shared_ptr<string> commonFiltersShrink_ {};
    // The cost category filter conditions. Different objects in the list and multiple values of the same cost category are matched by OR. The overall cost category filter is combined with the tag filter and CommonFilters by AND.
    shared_ptr<string> costCategoriesFiltersShrink_ {};
    // The query scope for enterprises and accounts. If not passed, the bill scope of the current account is queried. Only one enterprise object can be specified per request. The actual accessible scope is limited by permissions.
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    // The maximum number of records expected to be returned per page. It is used in conjunction with `NextToken`. Pass a positive integer. We recommend that you explicitly set this parameter and keep it unchanged during pagination. The actual number of returned records may be less than this value.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of query results. Do not pass this parameter for the first query. For subsequent queries, pass the `NextToken` returned in the previous response as is. The query ends when the token is empty or no longer returned. Do not construct or parse the token yourself. Keep `Period`, account scope, all filter conditions, and `MaxResults` consistent during pagination.
    shared_ptr<string> nextToken_ {};
    // The query time range. It is required for business logic and includes Granularity, StartTime, and EndTime. Only one billing month can be queried per request. If passed, it overrides the legacy flat time parameters.
    shared_ptr<string> periodShrink_ {};
    // The resource tag filter conditions. Different objects in the list and multiple values of the same tag key are matched by OR. The overall tag filter is combined with the cost category filter and CommonFilters by AND.
    shared_ptr<string> tagFiltersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
