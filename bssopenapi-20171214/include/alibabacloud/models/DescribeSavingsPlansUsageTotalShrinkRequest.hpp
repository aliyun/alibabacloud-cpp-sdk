// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageTotalShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageTotalShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(FilterParam, filterParamShrink_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageTotalShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(FilterParam, filterParamShrink_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
    };
    DescribeSavingsPlansUsageTotalShrinkRequest() = default ;
    DescribeSavingsPlansUsageTotalShrinkRequest(const DescribeSavingsPlansUsageTotalShrinkRequest &) = default ;
    DescribeSavingsPlansUsageTotalShrinkRequest(DescribeSavingsPlansUsageTotalShrinkRequest &&) = default ;
    DescribeSavingsPlansUsageTotalShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageTotalShrinkRequest() = default ;
    DescribeSavingsPlansUsageTotalShrinkRequest& operator=(const DescribeSavingsPlansUsageTotalShrinkRequest &) = default ;
    DescribeSavingsPlansUsageTotalShrinkRequest& operator=(DescribeSavingsPlansUsageTotalShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->endPeriod_ == nullptr && this->filterParamShrink_ == nullptr && this->periodType_ == nullptr && this->startPeriod_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeSavingsPlansUsageTotalShrinkRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string getEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeSavingsPlansUsageTotalShrinkRequest& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // filterParamShrink Field Functions 
    bool hasFilterParamShrink() const { return this->filterParamShrink_ != nullptr;};
    void deleteFilterParamShrink() { this->filterParamShrink_ = nullptr;};
    inline string getFilterParamShrink() const { DARABONBA_PTR_GET_DEFAULT(filterParamShrink_, "") };
    inline DescribeSavingsPlansUsageTotalShrinkRequest& setFilterParamShrink(string filterParamShrink) { DARABONBA_PTR_SET_VALUE(filterParamShrink_, filterParamShrink) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeSavingsPlansUsageTotalShrinkRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string getStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeSavingsPlansUsageTotalShrinkRequest& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


  protected:
    // The ID of the account for which you want to query usage summary. If you do not set this parameter, the data of the current Alibaba Cloud account and its RAM users is queried. To query the data of a RAM user, specify the ID of the RAM user.
    shared_ptr<int64_t> billOwnerId_ {};
    // The end of the time range to query. The end is excluded from the time range. If you do not set this parameter, the end time is the current time. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> endPeriod_ {};
    shared_ptr<string> filterParamShrink_ {};
    // The time granularity at which usage summary are queried. Valid values: MONTH, DAY, and HOUR.
    // 
    // This parameter is required.
    shared_ptr<string> periodType_ {};
    // The beginning of the time range to query. The beginning is included in the time range. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    // 
    // This parameter is required.
    shared_ptr<string> startPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
