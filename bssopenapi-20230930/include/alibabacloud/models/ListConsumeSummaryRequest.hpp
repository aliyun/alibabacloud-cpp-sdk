// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMESUMMARYREQUEST_HPP_
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
  class ListConsumeSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumeSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommonFilters, commonFilters_);
      DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumeSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonFilters, commonFilters_);
      DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
    };
    ListConsumeSummaryRequest() = default ;
    ListConsumeSummaryRequest(const ListConsumeSummaryRequest &) = default ;
    ListConsumeSummaryRequest(ListConsumeSummaryRequest &&) = default ;
    ListConsumeSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumeSummaryRequest() = default ;
    ListConsumeSummaryRequest& operator=(const ListConsumeSummaryRequest &) = default ;
    ListConsumeSummaryRequest& operator=(ListConsumeSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // For monthly queries, only one month is supported at a time. The value must be the same as the start month, and the format is `yyyy-MM`.
      // 
      // For daily queries, this parameter is required. The format is `yyyy-MM-dd`. The end date cannot be earlier than the start date, and the start and end dates must be in the same month.
      shared_ptr<string> endTime_ {};
      // `MONTHLY`: aggregates by month. `DAILY`: aggregates by day.
      shared_ptr<string> granularity_ {};
      // For monthly queries, the format is `yyyy-MM`.
      // 
      // For daily queries, the format is `yyyy-MM-dd`.
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
      // The list of account IDs to query. This parameter is required when an enterprise object is passed. If the entire EcIdAccountIds parameter is omitted, the data of the current calling account is queried by default.
      shared_ptr<vector<int64_t>> accountIds_ {};
      // The ID of the enterprise entity.
      shared_ptr<string> ecId_ {};
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
      // The name of the filter field. For supported fields and operations, see "Common filtering" in the supplementary description of request parameters.
      shared_ptr<string> filterField_ {};
      // The operator. Default value: `IN`. `IN` indicates inclusion or exact match, `NOT` indicates exclusion, and `PREFIX` indicates prefix match. For the specific support scope, see "Common filtering" in the supplementary description of request parameters.
      shared_ptr<string> operation_ {};
      // The filter values always use a string array, including single values, Boolean values, and account IDs.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->commonFilters_ == nullptr
        && this->dimensionType_ == nullptr && this->ecIdAccountIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->period_ == nullptr; };
    // commonFilters Field Functions 
    bool hasCommonFilters() const { return this->commonFilters_ != nullptr;};
    void deleteCommonFilters() { this->commonFilters_ = nullptr;};
    inline const vector<ListConsumeSummaryRequest::CommonFilters> & getCommonFilters() const { DARABONBA_PTR_GET_CONST(commonFilters_, vector<ListConsumeSummaryRequest::CommonFilters>) };
    inline vector<ListConsumeSummaryRequest::CommonFilters> getCommonFilters() { DARABONBA_PTR_GET(commonFilters_, vector<ListConsumeSummaryRequest::CommonFilters>) };
    inline ListConsumeSummaryRequest& setCommonFilters(const vector<ListConsumeSummaryRequest::CommonFilters> & commonFilters) { DARABONBA_PTR_SET_VALUE(commonFilters_, commonFilters) };
    inline ListConsumeSummaryRequest& setCommonFilters(vector<ListConsumeSummaryRequest::CommonFilters> && commonFilters) { DARABONBA_PTR_SET_RVALUE(commonFilters_, commonFilters) };


    // dimensionType Field Functions 
    bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
    void deleteDimensionType() { this->dimensionType_ = nullptr;};
    inline string getDimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
    inline ListConsumeSummaryRequest& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<ListConsumeSummaryRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<ListConsumeSummaryRequest::EcIdAccountIds>) };
    inline vector<ListConsumeSummaryRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<ListConsumeSummaryRequest::EcIdAccountIds>) };
    inline ListConsumeSummaryRequest& setEcIdAccountIds(const vector<ListConsumeSummaryRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline ListConsumeSummaryRequest& setEcIdAccountIds(vector<ListConsumeSummaryRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConsumeSummaryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConsumeSummaryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const ListConsumeSummaryRequest::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, ListConsumeSummaryRequest::Period) };
    inline ListConsumeSummaryRequest::Period getPeriod() { DARABONBA_PTR_GET(period_, ListConsumeSummaryRequest::Period) };
    inline ListConsumeSummaryRequest& setPeriod(const ListConsumeSummaryRequest::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListConsumeSummaryRequest& setPeriod(ListConsumeSummaryRequest::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


  protected:
    // The common filter conditions. Valid conditions for different fields take effect simultaneously. For supported fields and operations, see "Common filtering" in the supplementary description of request parameters.
    shared_ptr<vector<ListConsumeSummaryRequest::CommonFilters>> commonFilters_ {};
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
    shared_ptr<vector<ListConsumeSummaryRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    // The maximum number of records expected to be returned for a single query. Specify a positive integer. Keep this value unchanged during pagination. The actual number of returned records may be less than this value.
    shared_ptr<int32_t> maxResults_ {};
    // The query token for the next page. Do not specify this parameter for the first request. For subsequent requests, pass the value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The query time range, which specifies the time granularity, start time, and end time.
    shared_ptr<ListConsumeSummaryRequest::Period> period_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
