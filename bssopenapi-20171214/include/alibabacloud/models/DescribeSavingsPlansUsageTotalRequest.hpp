// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageTotalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageTotalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageTotalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
    };
    DescribeSavingsPlansUsageTotalRequest() = default ;
    DescribeSavingsPlansUsageTotalRequest(const DescribeSavingsPlansUsageTotalRequest &) = default ;
    DescribeSavingsPlansUsageTotalRequest(DescribeSavingsPlansUsageTotalRequest &&) = default ;
    DescribeSavingsPlansUsageTotalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageTotalRequest() = default ;
    DescribeSavingsPlansUsageTotalRequest& operator=(const DescribeSavingsPlansUsageTotalRequest &) = default ;
    DescribeSavingsPlansUsageTotalRequest& operator=(DescribeSavingsPlansUsageTotalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billOwnerId_ != nullptr
        && this->endPeriod_ != nullptr && this->periodType_ != nullptr && this->startPeriod_ != nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t billOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeSavingsPlansUsageTotalRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string endPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeSavingsPlansUsageTotalRequest& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string periodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeSavingsPlansUsageTotalRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string startPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeSavingsPlansUsageTotalRequest& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


  protected:
    // The ID of the account for which you want to query usage summary. If you do not set this parameter, the data of the current Alibaba Cloud account and its RAM users is queried. To query the data of a RAM user, specify the ID of the RAM user.
    std::shared_ptr<int64_t> billOwnerId_ = nullptr;
    // The end of the time range to query. The end is excluded from the time range. If you do not set this parameter, the end time is the current time. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> endPeriod_ = nullptr;
    // The time granularity at which usage summary are queried. Valid values: MONTH, DAY, and HOUR.
    // 
    // This parameter is required.
    std::shared_ptr<string> periodType_ = nullptr;
    // The beginning of the time range to query. The beginning is included in the time range. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    // 
    // This parameter is required.
    std::shared_ptr<string> startPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
