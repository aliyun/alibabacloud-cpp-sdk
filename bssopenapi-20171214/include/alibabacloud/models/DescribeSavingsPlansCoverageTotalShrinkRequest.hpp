// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansCoverageTotalShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansCoverageTotalShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(FilterParam, filterParamShrink_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansCoverageTotalShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(FilterParam, filterParamShrink_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
    };
    DescribeSavingsPlansCoverageTotalShrinkRequest() = default ;
    DescribeSavingsPlansCoverageTotalShrinkRequest(const DescribeSavingsPlansCoverageTotalShrinkRequest &) = default ;
    DescribeSavingsPlansCoverageTotalShrinkRequest(DescribeSavingsPlansCoverageTotalShrinkRequest &&) = default ;
    DescribeSavingsPlansCoverageTotalShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansCoverageTotalShrinkRequest() = default ;
    DescribeSavingsPlansCoverageTotalShrinkRequest& operator=(const DescribeSavingsPlansCoverageTotalShrinkRequest &) = default ;
    DescribeSavingsPlansCoverageTotalShrinkRequest& operator=(DescribeSavingsPlansCoverageTotalShrinkRequest &&) = default ;
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
    inline DescribeSavingsPlansCoverageTotalShrinkRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string getEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeSavingsPlansCoverageTotalShrinkRequest& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // filterParamShrink Field Functions 
    bool hasFilterParamShrink() const { return this->filterParamShrink_ != nullptr;};
    void deleteFilterParamShrink() { this->filterParamShrink_ = nullptr;};
    inline string getFilterParamShrink() const { DARABONBA_PTR_GET_DEFAULT(filterParamShrink_, "") };
    inline DescribeSavingsPlansCoverageTotalShrinkRequest& setFilterParamShrink(string filterParamShrink) { DARABONBA_PTR_SET_VALUE(filterParamShrink_, filterParamShrink) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeSavingsPlansCoverageTotalShrinkRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string getStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeSavingsPlansCoverageTotalShrinkRequest& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


  protected:
    // The ID of the resource ownership account. The resource ownership account is the account that actually uses the resource.
    shared_ptr<int64_t> billOwnerId_ {};
    // Format: yyyy-MM-dd HH:mm:ss. The query excludes this time. If this parameter is left empty, the query covers data up to the current time.
    shared_ptr<string> endPeriod_ {};
    shared_ptr<string> filterParamShrink_ {};
    // Valid values:
    // - MONTH: month granularity.
    // - DAY: day granularity.
    // - HOUR: hour granularity.
    // 
    // This parameter is required.
    shared_ptr<string> periodType_ {};
    // Format: yyyy-MM-dd HH:mm:ss. The query includes this time.
    // 
    // This parameter is required.
    shared_ptr<string> startPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
