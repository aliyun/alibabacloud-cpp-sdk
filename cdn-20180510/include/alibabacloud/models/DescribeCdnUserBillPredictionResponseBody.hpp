// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnUserBillPredictionResponseBodyBillPredictionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillPredictionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillPredictionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillPredictionData, billPredictionData_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillPredictionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillPredictionData, billPredictionData_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeCdnUserBillPredictionResponseBody() = default ;
    DescribeCdnUserBillPredictionResponseBody(const DescribeCdnUserBillPredictionResponseBody &) = default ;
    DescribeCdnUserBillPredictionResponseBody(DescribeCdnUserBillPredictionResponseBody &&) = default ;
    DescribeCdnUserBillPredictionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillPredictionResponseBody() = default ;
    DescribeCdnUserBillPredictionResponseBody& operator=(const DescribeCdnUserBillPredictionResponseBody &) = default ;
    DescribeCdnUserBillPredictionResponseBody& operator=(DescribeCdnUserBillPredictionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billPredictionData_ != nullptr
        && this->billType_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // billPredictionData Field Functions 
    bool hasBillPredictionData() const { return this->billPredictionData_ != nullptr;};
    void deleteBillPredictionData() { this->billPredictionData_ = nullptr;};
    inline const DescribeCdnUserBillPredictionResponseBodyBillPredictionData & billPredictionData() const { DARABONBA_PTR_GET_CONST(billPredictionData_, DescribeCdnUserBillPredictionResponseBodyBillPredictionData) };
    inline DescribeCdnUserBillPredictionResponseBodyBillPredictionData billPredictionData() { DARABONBA_PTR_GET(billPredictionData_, DescribeCdnUserBillPredictionResponseBodyBillPredictionData) };
    inline DescribeCdnUserBillPredictionResponseBody& setBillPredictionData(const DescribeCdnUserBillPredictionResponseBodyBillPredictionData & billPredictionData) { DARABONBA_PTR_SET_VALUE(billPredictionData_, billPredictionData) };
    inline DescribeCdnUserBillPredictionResponseBody& setBillPredictionData(DescribeCdnUserBillPredictionResponseBodyBillPredictionData && billPredictionData) { DARABONBA_PTR_SET_RVALUE(billPredictionData_, billPredictionData) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline DescribeCdnUserBillPredictionResponseBody& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCdnUserBillPredictionResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnUserBillPredictionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCdnUserBillPredictionResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The estimated bill data.
    std::shared_ptr<DescribeCdnUserBillPredictionResponseBodyBillPredictionData> billPredictionData_ = nullptr;
    // The metering method.
    // 
    // > If the metering method ends with _overseas, the billable region is outside the Chinese mainland. For example, BillType": "month_avg_day_bandwidth_overseas specifies a billable region outside the Chinese mainland and that the metering method is pay by daily peak bandwidth per month.
    // 
    // Valid values:
    // 
    // *   hour_flow: pay by hourly data transfer
    // *   day_bandwidth: pay by daily bandwidth
    // *   month_95: pay by monthly 95th percentile bandwidth.
    // *   month_avg_day_bandwidth: pay by average daily peak bandwidth per month
    // *   month_4th_day_bandwidth: pay by monthly 4th peak bandwidth
    // *   month_avg_day_95: pay by average daily 95th percentile bandwidth per month
    // *   month_95_night_half: pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00.
    // *   hour_vas: pay by value-added services per hour
    // *   day_count: pay by daily requests
    std::shared_ptr<string> billType_ = nullptr;
    // The end time of the estimation.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start time of the estimation.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
