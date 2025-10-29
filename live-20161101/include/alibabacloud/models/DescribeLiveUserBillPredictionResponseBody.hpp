// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveUserBillPredictionResponseBodyBillPredictionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserBillPredictionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserBillPredictionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillPredictionData, billPredictionData_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserBillPredictionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillPredictionData, billPredictionData_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveUserBillPredictionResponseBody() = default ;
    DescribeLiveUserBillPredictionResponseBody(const DescribeLiveUserBillPredictionResponseBody &) = default ;
    DescribeLiveUserBillPredictionResponseBody(DescribeLiveUserBillPredictionResponseBody &&) = default ;
    DescribeLiveUserBillPredictionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserBillPredictionResponseBody() = default ;
    DescribeLiveUserBillPredictionResponseBody& operator=(const DescribeLiveUserBillPredictionResponseBody &) = default ;
    DescribeLiveUserBillPredictionResponseBody& operator=(DescribeLiveUserBillPredictionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billPredictionData_ == nullptr
        && return this->billType_ == nullptr && return this->endTime_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // billPredictionData Field Functions 
    bool hasBillPredictionData() const { return this->billPredictionData_ != nullptr;};
    void deleteBillPredictionData() { this->billPredictionData_ = nullptr;};
    inline const DescribeLiveUserBillPredictionResponseBodyBillPredictionData & billPredictionData() const { DARABONBA_PTR_GET_CONST(billPredictionData_, DescribeLiveUserBillPredictionResponseBodyBillPredictionData) };
    inline DescribeLiveUserBillPredictionResponseBodyBillPredictionData billPredictionData() { DARABONBA_PTR_GET(billPredictionData_, DescribeLiveUserBillPredictionResponseBodyBillPredictionData) };
    inline DescribeLiveUserBillPredictionResponseBody& setBillPredictionData(const DescribeLiveUserBillPredictionResponseBodyBillPredictionData & billPredictionData) { DARABONBA_PTR_SET_VALUE(billPredictionData_, billPredictionData) };
    inline DescribeLiveUserBillPredictionResponseBody& setBillPredictionData(DescribeLiveUserBillPredictionResponseBodyBillPredictionData && billPredictionData) { DARABONBA_PTR_SET_RVALUE(billPredictionData_, billPredictionData) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The estimated bill data.
    std::shared_ptr<DescribeLiveUserBillPredictionResponseBodyBillPredictionData> billPredictionData_ = nullptr;
    // The metering method. Valid values:
    // 
    // *   hour_flow: pay by hourly data transfer
    // *   day_bandwidth: pay by daily bandwidth
    // *   month_95: pay by monthly 95th percentile bandwidth
    // *   month_avg_day_bandwidth: pay by average daily peak bandwidth per month
    // *   month_4th_day_bandwidth: pay by 4th peak bandwidth per month
    // *   month_avg_day_95: pay by average daily 95th percentile bandwidth per month
    // *   month_95_night_half: pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00
    // *   hour_vas: pay by value-added services per hour
    // *   day_count: pay by daily requests
    std::shared_ptr<string> billType_ = nullptr;
    // The end time. If you do not specify the request parameter EndTime, the end time is the current time by default. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start time. If you do not specify the request parameter StartTime, the start time is 00:00 on the first day of the month by default. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
