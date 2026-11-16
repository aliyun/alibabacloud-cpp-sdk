// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPLITSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSPLITSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListSplitSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSplitSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommonFilters, commonFilters_);
      DARABONBA_PTR_TO_JSON(CostCategoriesFilters, costCategoriesFilters_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(TagFilters, tagFilters_);
    };
    friend void from_json(const Darabonba::Json& j, ListSplitSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonFilters, commonFilters_);
      DARABONBA_PTR_FROM_JSON(CostCategoriesFilters, costCategoriesFilters_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(TagFilters, tagFilters_);
    };
    ListSplitSummaryRequest() = default ;
    ListSplitSummaryRequest(const ListSplitSummaryRequest &) = default ;
    ListSplitSummaryRequest(ListSplitSummaryRequest &&) = default ;
    ListSplitSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSplitSummaryRequest() = default ;
    ListSplitSummaryRequest& operator=(const ListSplitSummaryRequest &) = default ;
    ListSplitSummaryRequest& operator=(ListSplitSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagFilters& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
      };
      friend void from_json(const Darabonba::Json& j, TagFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
      };
      TagFilters() = default ;
      TagFilters(const TagFilters &) = default ;
      TagFilters(TagFilters &&) = default ;
      TagFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagFilters() = default ;
      TagFilters& operator=(const TagFilters &) = default ;
      TagFilters& operator=(TagFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValues_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagFilters& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValues Field Functions 
      bool hasTagValues() const { return this->tagValues_ != nullptr;};
      void deleteTagValues() { this->tagValues_ = nullptr;};
      inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
      inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
      inline TagFilters& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
      inline TagFilters& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


    protected:
      // The tag key. It cannot be empty or a string of only whitespace characters.
      // 
      // This parameter is required.
      shared_ptr<string> tagKey_ {};
      // The list of tag values. Matches any given value under the specified tag key. If this parameter is not passed or an empty array is passed, it only requires the existence of the tag key.
      shared_ptr<vector<string>> tagValues_ {};
    };

    class Period : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Period& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Granularity, granularity_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Period& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->granularity_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Period& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // granularity Field Functions 
      bool hasGranularity() const { return this->granularity_ != nullptr;};
      void deleteGranularity() { this->granularity_ = nullptr;};
      inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
      inline Period& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Period& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end time. It is inclusive. It is required for `DAILY` and the format is `yyyy-MM-dd`. It cannot be earlier than `StartTime` and must be in the same month as `StartTime`. It is optional for `MONTHLY`, but if passed, it must be the same as `StartTime`.
      shared_ptr<string> endTime_ {};
      // The time granularity. This parameter is required for business logic and is case-insensitive. Valid values:
      // - DAILY: aggregates by day
      // - MONTHLY: aggregates by month
      shared_ptr<string> granularity_ {};
      // The start time. It is required for business logic and is inclusive. The format is yyyy-MM for MONTHLY and yyyy-MM-dd for DAILY.
      shared_ptr<string> startTime_ {};
    };

    class EcIdAccountIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcIdAccountIds& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(EcId, ecId_);
      };
      friend void from_json(const Darabonba::Json& j, EcIdAccountIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(EcId, ecId_);
      };
      EcIdAccountIds() = default ;
      EcIdAccountIds(const EcIdAccountIds &) = default ;
      EcIdAccountIds(EcIdAccountIds &&) = default ;
      EcIdAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcIdAccountIds() = default ;
      EcIdAccountIds& operator=(const EcIdAccountIds &) = default ;
      EcIdAccountIds& operator=(EcIdAccountIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->ecId_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
      inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
      inline EcIdAccountIds& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline EcIdAccountIds& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // ecId Field Functions 
      bool hasEcId() const { return this->ecId_ != nullptr;};
      void deleteEcId() { this->ecId_ = nullptr;};
      inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
      inline EcIdAccountIds& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


    protected:
      // The list of account IDs to access. If it is empty, all accounts under the current enterprise entity are selected. The actual scope is limited by permissions.
      shared_ptr<vector<int64_t>> accountIds_ {};
      // The enterprise entity ID.
      shared_ptr<string> ecId_ {};
    };

    class CostCategoriesFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CostCategoriesFilters& obj) { 
        DARABONBA_PTR_TO_JSON(CostCategoriesKey, costCategoriesKey_);
        DARABONBA_PTR_TO_JSON(CostCategoriesValues, costCategoriesValues_);
      };
      friend void from_json(const Darabonba::Json& j, CostCategoriesFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(CostCategoriesKey, costCategoriesKey_);
        DARABONBA_PTR_FROM_JSON(CostCategoriesValues, costCategoriesValues_);
      };
      CostCategoriesFilters() = default ;
      CostCategoriesFilters(const CostCategoriesFilters &) = default ;
      CostCategoriesFilters(CostCategoriesFilters &&) = default ;
      CostCategoriesFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CostCategoriesFilters() = default ;
      CostCategoriesFilters& operator=(const CostCategoriesFilters &) = default ;
      CostCategoriesFilters& operator=(CostCategoriesFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->costCategoriesKey_ == nullptr
        && this->costCategoriesValues_ == nullptr; };
      // costCategoriesKey Field Functions 
      bool hasCostCategoriesKey() const { return this->costCategoriesKey_ != nullptr;};
      void deleteCostCategoriesKey() { this->costCategoriesKey_ = nullptr;};
      inline string getCostCategoriesKey() const { DARABONBA_PTR_GET_DEFAULT(costCategoriesKey_, "") };
      inline CostCategoriesFilters& setCostCategoriesKey(string costCategoriesKey) { DARABONBA_PTR_SET_VALUE(costCategoriesKey_, costCategoriesKey) };


      // costCategoriesValues Field Functions 
      bool hasCostCategoriesValues() const { return this->costCategoriesValues_ != nullptr;};
      void deleteCostCategoriesValues() { this->costCategoriesValues_ = nullptr;};
      inline const vector<string> & getCostCategoriesValues() const { DARABONBA_PTR_GET_CONST(costCategoriesValues_, vector<string>) };
      inline vector<string> getCostCategoriesValues() { DARABONBA_PTR_GET(costCategoriesValues_, vector<string>) };
      inline CostCategoriesFilters& setCostCategoriesValues(const vector<string> & costCategoriesValues) { DARABONBA_PTR_SET_VALUE(costCategoriesValues_, costCategoriesValues) };
      inline CostCategoriesFilters& setCostCategoriesValues(vector<string> && costCategoriesValues) { DARABONBA_PTR_SET_RVALUE(costCategoriesValues_, costCategoriesValues) };


    protected:
      // The cost category name. It cannot be empty or a string of only whitespace characters.
      // 
      // This parameter is required.
      shared_ptr<string> costCategoriesKey_ {};
      // The list of cost category values. Matches any given value under the specified cost category. If this parameter is not passed or an empty array is passed, it only requires the existence of the cost category.
      shared_ptr<vector<string>> costCategoriesValues_ {};
    };

    class CommonFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommonFilters& obj) { 
        DARABONBA_PTR_TO_JSON(FilterField, filterField_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, CommonFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(FilterField, filterField_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      CommonFilters() = default ;
      CommonFilters(const CommonFilters &) = default ;
      CommonFilters(CommonFilters &&) = default ;
      CommonFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommonFilters() = default ;
      CommonFilters& operator=(const CommonFilters &) = default ;
      CommonFilters& operator=(CommonFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filterField_ == nullptr
        && this->operation_ == nullptr && this->values_ == nullptr; };
      // filterField Field Functions 
      bool hasFilterField() const { return this->filterField_ != nullptr;};
      void deleteFilterField() { this->filterField_ = nullptr;};
      inline string getFilterField() const { DARABONBA_PTR_GET_DEFAULT(filterField_, "") };
      inline CommonFilters& setFilterField(string filterField) { DARABONBA_PTR_SET_VALUE(filterField_, filterField) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline CommonFilters& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline CommonFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline CommonFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The name of the filter field. It is required when setting conditions. For supported fields and matching rules, see the supplementary description of request parameters.
      shared_ptr<string> filterField_ {};
      // The matching method. This parameter is case-insensitive and defaults to IN if it is not specified or is empty. Valid values:
      // - IN: includes
      // - NOT: excludes
      // - PREFIX: literal prefix match
      // For the supported scope of each field, refer to the supplementary description of the request parameters.
      shared_ptr<string> operation_ {};
      // The filter values. It is always an array of strings. Arrays are also used for single values, Boolean values, and account IDs.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->commonFilters_ == nullptr
        && this->costCategoriesFilters_ == nullptr && this->ecIdAccountIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->period_ == nullptr
        && this->tagFilters_ == nullptr; };
    // commonFilters Field Functions 
    bool hasCommonFilters() const { return this->commonFilters_ != nullptr;};
    void deleteCommonFilters() { this->commonFilters_ = nullptr;};
    inline const vector<ListSplitSummaryRequest::CommonFilters> & getCommonFilters() const { DARABONBA_PTR_GET_CONST(commonFilters_, vector<ListSplitSummaryRequest::CommonFilters>) };
    inline vector<ListSplitSummaryRequest::CommonFilters> getCommonFilters() { DARABONBA_PTR_GET(commonFilters_, vector<ListSplitSummaryRequest::CommonFilters>) };
    inline ListSplitSummaryRequest& setCommonFilters(const vector<ListSplitSummaryRequest::CommonFilters> & commonFilters) { DARABONBA_PTR_SET_VALUE(commonFilters_, commonFilters) };
    inline ListSplitSummaryRequest& setCommonFilters(vector<ListSplitSummaryRequest::CommonFilters> && commonFilters) { DARABONBA_PTR_SET_RVALUE(commonFilters_, commonFilters) };


    // costCategoriesFilters Field Functions 
    bool hasCostCategoriesFilters() const { return this->costCategoriesFilters_ != nullptr;};
    void deleteCostCategoriesFilters() { this->costCategoriesFilters_ = nullptr;};
    inline const vector<ListSplitSummaryRequest::CostCategoriesFilters> & getCostCategoriesFilters() const { DARABONBA_PTR_GET_CONST(costCategoriesFilters_, vector<ListSplitSummaryRequest::CostCategoriesFilters>) };
    inline vector<ListSplitSummaryRequest::CostCategoriesFilters> getCostCategoriesFilters() { DARABONBA_PTR_GET(costCategoriesFilters_, vector<ListSplitSummaryRequest::CostCategoriesFilters>) };
    inline ListSplitSummaryRequest& setCostCategoriesFilters(const vector<ListSplitSummaryRequest::CostCategoriesFilters> & costCategoriesFilters) { DARABONBA_PTR_SET_VALUE(costCategoriesFilters_, costCategoriesFilters) };
    inline ListSplitSummaryRequest& setCostCategoriesFilters(vector<ListSplitSummaryRequest::CostCategoriesFilters> && costCategoriesFilters) { DARABONBA_PTR_SET_RVALUE(costCategoriesFilters_, costCategoriesFilters) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<ListSplitSummaryRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<ListSplitSummaryRequest::EcIdAccountIds>) };
    inline vector<ListSplitSummaryRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<ListSplitSummaryRequest::EcIdAccountIds>) };
    inline ListSplitSummaryRequest& setEcIdAccountIds(const vector<ListSplitSummaryRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline ListSplitSummaryRequest& setEcIdAccountIds(vector<ListSplitSummaryRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSplitSummaryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSplitSummaryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const ListSplitSummaryRequest::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, ListSplitSummaryRequest::Period) };
    inline ListSplitSummaryRequest::Period getPeriod() { DARABONBA_PTR_GET(period_, ListSplitSummaryRequest::Period) };
    inline ListSplitSummaryRequest& setPeriod(const ListSplitSummaryRequest::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListSplitSummaryRequest& setPeriod(ListSplitSummaryRequest::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // tagFilters Field Functions 
    bool hasTagFilters() const { return this->tagFilters_ != nullptr;};
    void deleteTagFilters() { this->tagFilters_ = nullptr;};
    inline const vector<ListSplitSummaryRequest::TagFilters> & getTagFilters() const { DARABONBA_PTR_GET_CONST(tagFilters_, vector<ListSplitSummaryRequest::TagFilters>) };
    inline vector<ListSplitSummaryRequest::TagFilters> getTagFilters() { DARABONBA_PTR_GET(tagFilters_, vector<ListSplitSummaryRequest::TagFilters>) };
    inline ListSplitSummaryRequest& setTagFilters(const vector<ListSplitSummaryRequest::TagFilters> & tagFilters) { DARABONBA_PTR_SET_VALUE(tagFilters_, tagFilters) };
    inline ListSplitSummaryRequest& setTagFilters(vector<ListSplitSummaryRequest::TagFilters> && tagFilters) { DARABONBA_PTR_SET_RVALUE(tagFilters_, tagFilters) };


  protected:
    // The common filter conditions. Supports filtering by product, commodity, region, billing item, fee type, resource, account, financial unit, resource group, and split item. Different fields are combined by AND. Only one object can be passed for the same field. For more information, see the supplementary description of request parameters.
    shared_ptr<vector<ListSplitSummaryRequest::CommonFilters>> commonFilters_ {};
    // The cost category filter conditions. Different objects in the list and multiple values of the same cost category are matched by OR. The overall cost category filter is combined with the tag filter and CommonFilters by AND.
    shared_ptr<vector<ListSplitSummaryRequest::CostCategoriesFilters>> costCategoriesFilters_ {};
    // The query scope for enterprises and accounts. If not passed, the bill scope of the current account is queried. Only one enterprise object can be specified per request. The actual accessible scope is limited by permissions.
    shared_ptr<vector<ListSplitSummaryRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    // The maximum number of records expected to be returned per page. It is used in conjunction with `NextToken`. Pass a positive integer. We recommend that you explicitly set this parameter and keep it unchanged during pagination. The actual number of returned records may be less than this value.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of query results. Do not pass this parameter for the first query. For subsequent queries, pass the `NextToken` returned in the previous response as is. The query ends when the token is empty or no longer returned. Do not construct or parse the token yourself. Keep `Period`, account scope, all filter conditions, and `MaxResults` consistent during pagination.
    shared_ptr<string> nextToken_ {};
    // The query time range. It is required for business logic and includes Granularity, StartTime, and EndTime. Only one billing month can be queried per request. If passed, it overrides the legacy flat time parameters.
    shared_ptr<ListSplitSummaryRequest::Period> period_ {};
    // The resource tag filter conditions. Different objects in the list and multiple values of the same tag key are matched by OR. The overall tag filter is combined with the cost category filter and CommonFilters by AND.
    shared_ptr<vector<ListSplitSummaryRequest::TagFilters>> tagFilters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
