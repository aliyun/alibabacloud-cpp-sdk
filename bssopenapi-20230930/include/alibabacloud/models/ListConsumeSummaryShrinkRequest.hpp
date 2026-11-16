// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMESUMMARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMESUMMARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListConsumeSummaryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumeSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommonFilters, commonFiltersShrink_);
      DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, periodShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumeSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonFilters, commonFiltersShrink_);
      DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, periodShrink_);
    };
    ListConsumeSummaryShrinkRequest() = default ;
    ListConsumeSummaryShrinkRequest(const ListConsumeSummaryShrinkRequest &) = default ;
    ListConsumeSummaryShrinkRequest(ListConsumeSummaryShrinkRequest &&) = default ;
    ListConsumeSummaryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumeSummaryShrinkRequest() = default ;
    ListConsumeSummaryShrinkRequest& operator=(const ListConsumeSummaryShrinkRequest &) = default ;
    ListConsumeSummaryShrinkRequest& operator=(ListConsumeSummaryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonFiltersShrink_ == nullptr
        && this->dimensionType_ == nullptr && this->ecIdAccountIdsShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->periodShrink_ == nullptr; };
    // commonFiltersShrink Field Functions 
    bool hasCommonFiltersShrink() const { return this->commonFiltersShrink_ != nullptr;};
    void deleteCommonFiltersShrink() { this->commonFiltersShrink_ = nullptr;};
    inline string getCommonFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(commonFiltersShrink_, "") };
    inline ListConsumeSummaryShrinkRequest& setCommonFiltersShrink(string commonFiltersShrink) { DARABONBA_PTR_SET_VALUE(commonFiltersShrink_, commonFiltersShrink) };


    // dimensionType Field Functions 
    bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
    void deleteDimensionType() { this->dimensionType_ = nullptr;};
    inline string getDimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
    inline ListConsumeSummaryShrinkRequest& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline ListConsumeSummaryShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConsumeSummaryShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConsumeSummaryShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // periodShrink Field Functions 
    bool hasPeriodShrink() const { return this->periodShrink_ != nullptr;};
    void deletePeriodShrink() { this->periodShrink_ = nullptr;};
    inline string getPeriodShrink() const { DARABONBA_PTR_GET_DEFAULT(periodShrink_, "") };
    inline ListConsumeSummaryShrinkRequest& setPeriodShrink(string periodShrink) { DARABONBA_PTR_SET_VALUE(periodShrink_, periodShrink) };


  protected:
    // The common filter conditions. Valid conditions for different fields take effect simultaneously. For supported fields and operations, see "Common filtering" in the supplementary description of request parameters.
    shared_ptr<string> commonFiltersShrink_ {};
    // The aggregation dimension.
    // 
    // `BILLING_ITEM`: aggregates by billing item. This is the default value.
    // 
    // `RESOURCE`: aggregates by resource.
    // 
    // `PRODUCT`: aggregates by product.
    // 
    // `ACCOUNT`: aggregates by account.
    shared_ptr<string> dimensionType_ {};
    // The query scope for enterprises and accounts. If this parameter is not specified, the default billing scope of the current calling account is used. Only one enterprise object can be specified per request, and the actual scope is limited by permissions.
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    // The maximum number of records expected to be returned for a single query. Specify a positive integer. Keep this value unchanged during pagination. The actual number of returned records may be less than this value.
    shared_ptr<int32_t> maxResults_ {};
    // The query token for the next page. Do not specify this parameter for the first request. For subsequent requests, pass the value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The query time range, which specifies the time granularity, start time, and end time.
    shared_ptr<string> periodShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
