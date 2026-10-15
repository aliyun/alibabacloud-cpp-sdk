// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageDetailShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageDetailShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(FilterParam, filterParamShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageDetailShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(FilterParam, filterParamShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeSavingsPlansUsageDetailShrinkRequest() = default ;
    DescribeSavingsPlansUsageDetailShrinkRequest(const DescribeSavingsPlansUsageDetailShrinkRequest &) = default ;
    DescribeSavingsPlansUsageDetailShrinkRequest(DescribeSavingsPlansUsageDetailShrinkRequest &&) = default ;
    DescribeSavingsPlansUsageDetailShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageDetailShrinkRequest() = default ;
    DescribeSavingsPlansUsageDetailShrinkRequest& operator=(const DescribeSavingsPlansUsageDetailShrinkRequest &) = default ;
    DescribeSavingsPlansUsageDetailShrinkRequest& operator=(DescribeSavingsPlansUsageDetailShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->endPeriod_ == nullptr && this->filterParamShrink_ == nullptr && this->maxResults_ == nullptr && this->periodType_ == nullptr && this->startPeriod_ == nullptr
        && this->token_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeSavingsPlansUsageDetailShrinkRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string getEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeSavingsPlansUsageDetailShrinkRequest& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // filterParamShrink Field Functions 
    bool hasFilterParamShrink() const { return this->filterParamShrink_ != nullptr;};
    void deleteFilterParamShrink() { this->filterParamShrink_ = nullptr;};
    inline string getFilterParamShrink() const { DARABONBA_PTR_GET_DEFAULT(filterParamShrink_, "") };
    inline DescribeSavingsPlansUsageDetailShrinkRequest& setFilterParamShrink(string filterParamShrink) { DARABONBA_PTR_SET_VALUE(filterParamShrink_, filterParamShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSavingsPlansUsageDetailShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeSavingsPlansUsageDetailShrinkRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string getStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeSavingsPlansUsageDetailShrinkRequest& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeSavingsPlansUsageDetailShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The ID of the account. If this parameter is left empty, data of the current account and its trusteeship linked accounts is queried. You can specify a trusteeship linked account ID to query data of that account.
    shared_ptr<int64_t> billOwnerId_ {};
    // The end time. Format: yyyy-MM-dd HH:mm:ss. The query excludes data at this time. If this parameter is left empty, the query covers data up to the current time.
    shared_ptr<string> endPeriod_ {};
    shared_ptr<string> filterParamShrink_ {};
    // The maximum number of data records to return. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> maxResults_ {};
    // The time granularity for querying usage details. Valid values:
    // 
    // - MONTH: monthly granularity.
    // - DAY: daily granularity.
    // - HOUR: hourly granularity.
    // 
    // This parameter is required.
    shared_ptr<string> periodType_ {};
    // The start time. Format: yyyy-MM-dd HH:mm:ss. The query includes data at this time.
    // 
    // This parameter is required.
    shared_ptr<string> startPeriod_ {};
    // The pagination token. Leave this parameter empty for the first page. The query result returns the token for the next page. If the returned token is empty, all data has been retrieved.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
