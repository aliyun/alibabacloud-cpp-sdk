// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnBandWidthDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnBandWidthDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnBandWidthDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEpnBandWidthDataResponseBody() = default ;
    DescribeEpnBandWidthDataResponseBody(const DescribeEpnBandWidthDataResponseBody &) = default ;
    DescribeEpnBandWidthDataResponseBody(DescribeEpnBandWidthDataResponseBody &&) = default ;
    DescribeEpnBandWidthDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnBandWidthDataResponseBody() = default ;
    DescribeEpnBandWidthDataResponseBody& operator=(const DescribeEpnBandWidthDataResponseBody &) = default ;
    DescribeEpnBandWidthDataResponseBody& operator=(DescribeEpnBandWidthDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorData& obj) { 
        DARABONBA_PTR_TO_JSON(BandWidthMonitorData, bandWidthMonitorData_);
        DARABONBA_PTR_TO_JSON(MaxDownBandWidth, maxDownBandWidth_);
        DARABONBA_PTR_TO_JSON(MaxUpBandWidth, maxUpBandWidth_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(BandWidthMonitorData, bandWidthMonitorData_);
        DARABONBA_PTR_FROM_JSON(MaxDownBandWidth, maxDownBandWidth_);
        DARABONBA_PTR_FROM_JSON(MaxUpBandWidth, maxUpBandWidth_);
      };
      MonitorData() = default ;
      MonitorData(const MonitorData &) = default ;
      MonitorData(MonitorData &&) = default ;
      MonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorData() = default ;
      MonitorData& operator=(const MonitorData &) = default ;
      MonitorData& operator=(MonitorData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BandWidthMonitorData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BandWidthMonitorData& obj) { 
          DARABONBA_PTR_TO_JSON(DownBandWidth, downBandWidth_);
          DARABONBA_PTR_TO_JSON(InternetRX, internetRX_);
          DARABONBA_PTR_TO_JSON(InternetTX, internetTX_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(UpBandWidth, upBandWidth_);
        };
        friend void from_json(const Darabonba::Json& j, BandWidthMonitorData& obj) { 
          DARABONBA_PTR_FROM_JSON(DownBandWidth, downBandWidth_);
          DARABONBA_PTR_FROM_JSON(InternetRX, internetRX_);
          DARABONBA_PTR_FROM_JSON(InternetTX, internetTX_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(UpBandWidth, upBandWidth_);
        };
        BandWidthMonitorData() = default ;
        BandWidthMonitorData(const BandWidthMonitorData &) = default ;
        BandWidthMonitorData(BandWidthMonitorData &&) = default ;
        BandWidthMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BandWidthMonitorData() = default ;
        BandWidthMonitorData& operator=(const BandWidthMonitorData &) = default ;
        BandWidthMonitorData& operator=(BandWidthMonitorData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->downBandWidth_ == nullptr
        && this->internetRX_ == nullptr && this->internetTX_ == nullptr && this->timeStamp_ == nullptr && this->upBandWidth_ == nullptr; };
        // downBandWidth Field Functions 
        bool hasDownBandWidth() const { return this->downBandWidth_ != nullptr;};
        void deleteDownBandWidth() { this->downBandWidth_ = nullptr;};
        inline int64_t getDownBandWidth() const { DARABONBA_PTR_GET_DEFAULT(downBandWidth_, 0L) };
        inline BandWidthMonitorData& setDownBandWidth(int64_t downBandWidth) { DARABONBA_PTR_SET_VALUE(downBandWidth_, downBandWidth) };


        // internetRX Field Functions 
        bool hasInternetRX() const { return this->internetRX_ != nullptr;};
        void deleteInternetRX() { this->internetRX_ = nullptr;};
        inline int64_t getInternetRX() const { DARABONBA_PTR_GET_DEFAULT(internetRX_, 0L) };
        inline BandWidthMonitorData& setInternetRX(int64_t internetRX) { DARABONBA_PTR_SET_VALUE(internetRX_, internetRX) };


        // internetTX Field Functions 
        bool hasInternetTX() const { return this->internetTX_ != nullptr;};
        void deleteInternetTX() { this->internetTX_ = nullptr;};
        inline int64_t getInternetTX() const { DARABONBA_PTR_GET_DEFAULT(internetTX_, 0L) };
        inline BandWidthMonitorData& setInternetTX(int64_t internetTX) { DARABONBA_PTR_SET_VALUE(internetTX_, internetTX) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline BandWidthMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // upBandWidth Field Functions 
        bool hasUpBandWidth() const { return this->upBandWidth_ != nullptr;};
        void deleteUpBandWidth() { this->upBandWidth_ = nullptr;};
        inline int64_t getUpBandWidth() const { DARABONBA_PTR_GET_DEFAULT(upBandWidth_, 0L) };
        inline BandWidthMonitorData& setUpBandWidth(int64_t upBandWidth) { DARABONBA_PTR_SET_VALUE(upBandWidth_, upBandWidth) };


      protected:
        // The outbound bandwidth. Unit: bit/s.
        shared_ptr<int64_t> downBandWidth_ {};
        // The Internet traffic to the instance. Unit: bytes.
        shared_ptr<int64_t> internetRX_ {};
        // The Internet traffic from the instance. Unit: bytes.
        shared_ptr<int64_t> internetTX_ {};
        // The timestamp when the monitoring data was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
        // The inbound bandwidth. Unit: bit/s.
        shared_ptr<int64_t> upBandWidth_ {};
      };

      virtual bool empty() const override { return this->bandWidthMonitorData_ == nullptr
        && this->maxDownBandWidth_ == nullptr && this->maxUpBandWidth_ == nullptr; };
      // bandWidthMonitorData Field Functions 
      bool hasBandWidthMonitorData() const { return this->bandWidthMonitorData_ != nullptr;};
      void deleteBandWidthMonitorData() { this->bandWidthMonitorData_ = nullptr;};
      inline const vector<MonitorData::BandWidthMonitorData> & getBandWidthMonitorData() const { DARABONBA_PTR_GET_CONST(bandWidthMonitorData_, vector<MonitorData::BandWidthMonitorData>) };
      inline vector<MonitorData::BandWidthMonitorData> getBandWidthMonitorData() { DARABONBA_PTR_GET(bandWidthMonitorData_, vector<MonitorData::BandWidthMonitorData>) };
      inline MonitorData& setBandWidthMonitorData(const vector<MonitorData::BandWidthMonitorData> & bandWidthMonitorData) { DARABONBA_PTR_SET_VALUE(bandWidthMonitorData_, bandWidthMonitorData) };
      inline MonitorData& setBandWidthMonitorData(vector<MonitorData::BandWidthMonitorData> && bandWidthMonitorData) { DARABONBA_PTR_SET_RVALUE(bandWidthMonitorData_, bandWidthMonitorData) };


      // maxDownBandWidth Field Functions 
      bool hasMaxDownBandWidth() const { return this->maxDownBandWidth_ != nullptr;};
      void deleteMaxDownBandWidth() { this->maxDownBandWidth_ = nullptr;};
      inline int64_t getMaxDownBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxDownBandWidth_, 0L) };
      inline MonitorData& setMaxDownBandWidth(int64_t maxDownBandWidth) { DARABONBA_PTR_SET_VALUE(maxDownBandWidth_, maxDownBandWidth) };


      // maxUpBandWidth Field Functions 
      bool hasMaxUpBandWidth() const { return this->maxUpBandWidth_ != nullptr;};
      void deleteMaxUpBandWidth() { this->maxUpBandWidth_ = nullptr;};
      inline int64_t getMaxUpBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxUpBandWidth_, 0L) };
      inline MonitorData& setMaxUpBandWidth(int64_t maxUpBandWidth) { DARABONBA_PTR_SET_VALUE(maxUpBandWidth_, maxUpBandWidth) };


    protected:
      // The bandwidth data.
      shared_ptr<vector<MonitorData::BandWidthMonitorData>> bandWidthMonitorData_ {};
      // The maximum outbound bandwidth within the queried time range. Unit: bit/s.
      shared_ptr<int64_t> maxDownBandWidth_ {};
      // The maximum inbound bandwidth within the queried time range. Unit: bit/s.
      shared_ptr<int64_t> maxUpBandWidth_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->requestId_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeEpnBandWidthDataResponseBody::MonitorData & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeEpnBandWidthDataResponseBody::MonitorData) };
    inline DescribeEpnBandWidthDataResponseBody::MonitorData getMonitorData() { DARABONBA_PTR_GET(monitorData_, DescribeEpnBandWidthDataResponseBody::MonitorData) };
    inline DescribeEpnBandWidthDataResponseBody& setMonitorData(const DescribeEpnBandWidthDataResponseBody::MonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeEpnBandWidthDataResponseBody& setMonitorData(DescribeEpnBandWidthDataResponseBody::MonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnBandWidthDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring data of the instance.
    shared_ptr<DescribeEpnBandWidthDataResponseBody::MonitorData> monitorData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
