// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class BillPredictionData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillPredictionData& obj) { 
        DARABONBA_PTR_TO_JSON(BillPredictionDataItem, billPredictionDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, BillPredictionData& obj) { 
        DARABONBA_PTR_FROM_JSON(BillPredictionDataItem, billPredictionDataItem_);
      };
      BillPredictionData() = default ;
      BillPredictionData(const BillPredictionData &) = default ;
      BillPredictionData(BillPredictionData &&) = default ;
      BillPredictionData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillPredictionData() = default ;
      BillPredictionData& operator=(const BillPredictionData &) = default ;
      BillPredictionData& operator=(BillPredictionData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BillPredictionDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillPredictionDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(TimeStp, timeStp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, BillPredictionDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(TimeStp, timeStp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        BillPredictionDataItem() = default ;
        BillPredictionDataItem(const BillPredictionDataItem &) = default ;
        BillPredictionDataItem(BillPredictionDataItem &&) = default ;
        BillPredictionDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BillPredictionDataItem() = default ;
        BillPredictionDataItem& operator=(const BillPredictionDataItem &) = default ;
        BillPredictionDataItem& operator=(BillPredictionDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->timeStp_ == nullptr && this->value_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline BillPredictionDataItem& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // timeStp Field Functions 
        bool hasTimeStp() const { return this->timeStp_ != nullptr;};
        void deleteTimeStp() { this->timeStp_ = nullptr;};
        inline string getTimeStp() const { DARABONBA_PTR_GET_DEFAULT(timeStp_, "") };
        inline BillPredictionDataItem& setTimeStp(string timeStp) { DARABONBA_PTR_SET_VALUE(timeStp_, timeStp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline BillPredictionDataItem& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The billable region. Valid values:
        // 
        // *   CN: Chinese mainland
        // *   OverSeas: countries and regions outside the Chinese mainland
        // *   AP1: Asia Pacific 1, including Hong Kong (China), Macao (China), Taiwan (China), Japan, and other Southeast Asia countries and regions except Vietnam and Indonesia
        // *   AP2: Asia Pacific 2, including Indonesia, South Korea, and Vietnam
        // *   AP3: Asia Pacific 3, including Australia and New Zealand
        // *   NA: North America, including US and Canada
        // *   SA: South America, specifically meaning Brazil
        // *   EU: Europe, including Ukraine, UK, France, Netherlands, Spain, Italy, Sweden, and Germany
        // *   MEAA: Middle East and Africa, including South Africa, Oman, UAE, and Kuwait
        // 
        // By default, data of all regions is aggregated and returned.
        shared_ptr<string> area_ {};
        // The time at which the estimated value occurs. This parameter is returned only if the metering method is pay by 95th percentile bandwidth, pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00, or pay by 4th peak bandwidth per month.
        shared_ptr<string> timeStp_ {};
        // The estimated value.
        shared_ptr<float> value_ {};
      };

      virtual bool empty() const override { return this->billPredictionDataItem_ == nullptr; };
      // billPredictionDataItem Field Functions 
      bool hasBillPredictionDataItem() const { return this->billPredictionDataItem_ != nullptr;};
      void deleteBillPredictionDataItem() { this->billPredictionDataItem_ = nullptr;};
      inline const vector<BillPredictionData::BillPredictionDataItem> & getBillPredictionDataItem() const { DARABONBA_PTR_GET_CONST(billPredictionDataItem_, vector<BillPredictionData::BillPredictionDataItem>) };
      inline vector<BillPredictionData::BillPredictionDataItem> getBillPredictionDataItem() { DARABONBA_PTR_GET(billPredictionDataItem_, vector<BillPredictionData::BillPredictionDataItem>) };
      inline BillPredictionData& setBillPredictionDataItem(const vector<BillPredictionData::BillPredictionDataItem> & billPredictionDataItem) { DARABONBA_PTR_SET_VALUE(billPredictionDataItem_, billPredictionDataItem) };
      inline BillPredictionData& setBillPredictionDataItem(vector<BillPredictionData::BillPredictionDataItem> && billPredictionDataItem) { DARABONBA_PTR_SET_RVALUE(billPredictionDataItem_, billPredictionDataItem) };


    protected:
      shared_ptr<vector<BillPredictionData::BillPredictionDataItem>> billPredictionDataItem_ {};
    };

    virtual bool empty() const override { return this->billPredictionData_ == nullptr
        && this->billType_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // billPredictionData Field Functions 
    bool hasBillPredictionData() const { return this->billPredictionData_ != nullptr;};
    void deleteBillPredictionData() { this->billPredictionData_ = nullptr;};
    inline const DescribeLiveUserBillPredictionResponseBody::BillPredictionData & getBillPredictionData() const { DARABONBA_PTR_GET_CONST(billPredictionData_, DescribeLiveUserBillPredictionResponseBody::BillPredictionData) };
    inline DescribeLiveUserBillPredictionResponseBody::BillPredictionData getBillPredictionData() { DARABONBA_PTR_GET(billPredictionData_, DescribeLiveUserBillPredictionResponseBody::BillPredictionData) };
    inline DescribeLiveUserBillPredictionResponseBody& setBillPredictionData(const DescribeLiveUserBillPredictionResponseBody::BillPredictionData & billPredictionData) { DARABONBA_PTR_SET_VALUE(billPredictionData_, billPredictionData) };
    inline DescribeLiveUserBillPredictionResponseBody& setBillPredictionData(DescribeLiveUserBillPredictionResponseBody::BillPredictionData && billPredictionData) { DARABONBA_PTR_SET_RVALUE(billPredictionData_, billPredictionData) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveUserBillPredictionResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The estimated bill data.
    shared_ptr<DescribeLiveUserBillPredictionResponseBody::BillPredictionData> billPredictionData_ {};
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
    shared_ptr<string> billType_ {};
    // The end time. If you do not specify the request parameter EndTime, the end time is the current time by default. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time. If you do not specify the request parameter StartTime, the start time is 00:00 on the first day of the month by default. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
